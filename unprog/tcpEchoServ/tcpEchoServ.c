#include <stdio.h>
// printf() Function

#include <stdlib.h>
// exit() Function

#include <sys/socket.h>
// socket() Function
// bind() Function
// listen() Function
// accept() Function
// socklen_t Type
// AF_INET Constant

#include <netinet/in.h>
// sockaddr_in Structure
// INADDR_ANY Constant

#include <arpa/inet.h>
// htonl() Function
// htons() Function

#include <strings.h>
// bzero() Function

#include <unistd.h>
// fork() Function
// close() Function
// read() Function
// write() Function
#include <signal.h>
#include <errno.h>
// errno Variable
// EINTR Signal

#define	SERV_PORT 9877
#define LISTENQ 1024
#define	MAXLINE	4096

void str_echo(int sockfd);
ssize_t writen(int fd, const void *vptr, size_t n);
void Writen(int fd, void *ptr, size_t nbytes);
void Err_exit(char* err_msg);

int main()
{
    int listenfd;
    // for Listen Socket
    
    int connfd;
    // for Connect Socket

    pid_t childpid;
    // for Child PID
    
    socklen_t clilen;
    // Length of Client's Address
    
    struct sockaddr_in cliaddr, servaddr;
    // Address for Client and Server
    
    void sig_chld(int);
    
    if ( (listenfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
        Err_exit("socket error");
    
    bzero(&servaddr, sizeof(servaddr) );
    servaddr.sin_family = AF_INET;
    
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    // INADDR_ANY : Wildcard Address (어떠한 Interface로부터 오는 연결도 허용한다.)
    
    servaddr.sin_port = htons(SERV_PORT);
    // SERV_PORT = 9877
    // Client는 서버의 IP주소와 포트번호(SERV_PORT)를 알고 있다 가정한다.
    
    if ( bind(listenfd, (struct sockaddr *) &servaddr, sizeof(servaddr) ) < 0 )
        Err_exit("bind error");
    
    if ( listen(listenfd, LISTENQ) < 0 )
        Err_exit("listen error");
    // listenfd 소켓이 Listening Socket으로 변환된다.
    
    //signal(SIGCHLD, sig_chld);
    // SIGCHLD에 대한 Signal Handler를 sig_chld()로 지정한다.
    
    for ( ; ; ) {
        clilen = sizeof(cliaddr);
        
        if ( (connfd = accept(listenfd, (struct sockaddr *) &cliaddr, &clilen) ) < 0) {
        // 서버가 클라이언트와 연결되기까지, 서버는 Blocked된다.
        // Parent가 accept()에서 Block되어 있는 동안, Child가 Terminate되면,
        // sig_chld()가 수행되고, accept()에서는 EINTR이 리턴된다.
            if (errno == EINTR)
            // Child가 Terminate되면, for Loop를 다시 시작한다.
            // Child가 Terminate되어 Blocked되어 있던 Parent까지 종료시키는 것을 방지한다.
                continue;
            else
                Err_exit("accept error");
        }
        
        if ( (childpid = fork()) == 0) {
        // Child process's workspace 
            if ( close(listenfd) == -1 )  // Close listening socket
                Err_exit("close error");
                
			printf("success\n"); 
			str_echo(connfd);
            exit(0);
        }
        
        if ( close(connfd) == -1 )    // Parent process closes connected socker
            Err_exit("close error");
    }
}
/*
void sig_chld(int signo)
{
    pid_t pid;
    int stat;
    while ( (pid = waitpid(-1, &stat, WNOHANG)) > 0)
        printf("child %d terminated\n", pid);
    return;
}*/

void str_echo(int sockfd)
{
    ssize_t n;
    char buf[MAXLINE];
    
    again:
        while ( (n = read(sockfd, buf, MAXLINE)) > 0 ){
			writen(sockfd, buf, n);
		} 
		if (n < 0 && errno == EINTR)
            goto again;
        // EINTR 에러가 발생되면, 무시하고 while Loop를 다시 시작한다.
            
        else if (n < 0) {
            printf("str_echo: read error\n");
            exit(1);
        }

}

ssize_t writen(int fd, const void *vptr, size_t n)
{ /* Write "n" bytes to a descriptor. */
	size_t		nleft;
	ssize_t		nwritten;
	const char	*ptr;

	ptr = vptr;
	nleft = n;
	while (nleft > 0) {
		if ( (nwritten = write(fd, ptr, nleft)) <= 0) {
			if (nwritten < 0 && errno == EINTR)
				nwritten = 0;		/* and call write() again */
			else
				return(-1);			/* error */
		}

		nleft -= nwritten;
		ptr   += nwritten;
	}
	return(n);
} /* end writen */

void Writen(int fd, void *ptr, size_t nbytes)
{
	printf("ddddd");
	if (writen(fd, ptr, nbytes) != nbytes)
		Err_exit("writen error");
}

void Err_exit(char* err_msg){
    printf("%s\n", err_msg);
    exit(1);
}
