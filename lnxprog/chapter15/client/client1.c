#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <unistd.h>
#include <stdlib.h>

#define SERV_PORT 9866

int main(){
	int sockfd;
	socklen_t len;
	struct sockaddr_in servaddr;
	int result;
	char ch = 'A';

	sockfd = socket(AF_INET, SOCK_STREAM, 0);

	servaddr.sin_family = AF_INET;
	servaddr.sin_port = htons(SERV_PORT);	
	//strcpy(servaddr.sin_path, "server_socket");
	len = sizeof(servaddr);

	result = connect(sockfd, (struct sockaddr *) &servaddr, len);
	if(result == -1){
		perror("oops: client1");
		exit(1);
	}

	write(sockfd, &ch, 1);
	read(sockfd, &ch, 1);
	printf("char from server = %c\n", ch);
	close(sockfd);
	exit(0);
}
