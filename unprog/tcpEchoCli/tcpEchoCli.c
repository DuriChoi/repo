#include <stdio.h>
// printf() Function
// fgets() Function
// ferror() Function
// fputs() Function

#include <stdlib.h>
// exit() Function

#include <netinet/in.h>
// sockaddr_in Structure

#include <arpa/inet.h>
// htons() Function
// inet_pton() Function

#include <sys/socket.h>
// socket() Function
// connect() Function
// AF_INET Constant

#include <sys/types.h>
// size_t, ssize_t Types

#include <unistd.h>
// read() Function
// write() Function

#include <strings.h>
// bzero() Function

#include <string.h>
// strlen() Function

#include <errno.h>
// errno Variable
// EINTR Signal

#define	SERV_PORT 9877
#define	MAXLINE 4096

void str_cli(FILE *fp, int sockfd);
char *Fgets(char *ptr, int n, FILE *stream);
void Fputs(const char *ptr, FILE *stream);
ssize_t writen(int fd, const void *vptr, size_t n);
void Writen(int fd, void *ptr, size_t nbytes);
static ssize_t my_read(int fd, char *ptr);
ssize_t readline(int fd, void *vptr, size_t maxlen);
ssize_t Readline(int fd, void *ptr, size_t maxlen);
void Err_exit(char* err_msg);

static int	read_cnt;
static char	*read_ptr;
static char	read_buf[MAXLINE];

int main(int argc, char **argv)
{
    int sockfd;
    struct sockaddr_in servaddr;
    
    if (argc != 2)
    	Err_exit("usage: tcpcli <IPaddress>");
        
    if ( ( sockfd = socket(AF_INET, SOCK_STREAM, 0) ) < 0 )
        Err_exit("socket error");
        
    bzero( &servaddr, sizeof(servaddr) );
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(SERV_PORT);
    
    if ( inet_pton(AF_INET, argv[1], &servaddr.sin_addr) < 1 )
        Err_exit("inet_pton error");
        
    if (connect(sockfd, (struct sockaddr *) &servaddr, sizeof(servaddr) ) < 0 )
        Err_exit("connect error");
        
    str_cli(stdin, sockfd);
    
    exit(0);
}

void str_cli(FILE *fp, int sockfd)
{
    char sendline[MAXLINE];
    char recvline[MAXLINE];
    
    while ( Fgets(sendline, MAXLINE, fp) != NULL ) {
		printf("Client: "); 
        Writen( sockfd, sendline, strlen(sendline) );
        
        if ( Readline(sockfd, recvline, MAXLINE) == 0 )
            Err_exit("str_cli: server terminated prematurely");
        
        Fputs(recvline, stdout);        
    }
}

char *Fgets(char *ptr, int n, FILE *stream)
{
	char	*rptr;

	if ( (rptr = fgets(ptr, n, stream)) == NULL && ferror(stream))
		Err_exit("fgets error");

	return (rptr);
}

void Fputs(const char *ptr, FILE *stream)
{
	if (fputs(ptr, stream) == EOF)
		Err_exit("fputs error");
}

ssize_t writen(int fd, const void *vptr, size_t n)
{
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
}

void Writen(int fd, void *ptr, size_t nbytes)
{
	if (writen(fd, ptr, nbytes) != nbytes)
		Err_exit("writen error");
}

static ssize_t my_read(int fd, char *ptr)
{

	if (read_cnt <= 0) {
again:
		if ( (read_cnt = read(fd, read_buf, sizeof(read_buf))) < 0) {
			if (errno == EINTR)
				goto again;
			return(-1);
		} else if (read_cnt == 0)
			return(0);
		read_ptr = read_buf;
	}

	read_cnt--;
	*ptr = *read_ptr++;
	return(1);
}

ssize_t readline(int fd, void *vptr, size_t maxlen)
{
	ssize_t	n, rc;
	char	c, *ptr;

	ptr = vptr;
	for (n = 1; n < maxlen; n++) {
		if ( (rc = my_read(fd, &c)) == 1) {
			*ptr++ = c;
			if (c == '\n')
				break;	/* newline is stored, like fgets() */
		} else if (rc == 0) {
			*ptr = 0;
			return(n - 1);	/* EOF, n - 1 bytes were read */
		} else
			return(-1);		/* error, errno set by read() */
	}

	*ptr = 0;	/* null terminate like fgets() */
	return(n);
}

ssize_t Readline(int fd, void *ptr, size_t maxlen)
{
	ssize_t		n;

	if ( (n = readline(fd, ptr, maxlen)) < 0)
		Err_exit("readline error");
	return(n);
}
// Readline은 Disk File을 읽을 때에는 유용하나, ~
// 네트워크 프로그램에서 사용하기엔 위험하다.

void Err_exit(char* err_msg){
    printf("%s\n", err_msg);
    exit(1);
}
