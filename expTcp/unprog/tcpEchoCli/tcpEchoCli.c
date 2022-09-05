#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define PORT 9876 

int main(void){
    struct sockaddr_in addr;
    char buffer[1024];
	int len;
	int i = 0;
	int sock, conn_t, send_t, recv_t;	
	int check_wait = 0;	
	
	sock = socket(AF_INET, SOCK_STREAM, 0);
	if(sock < 0){
		perror("socket ");
		return 1;
	}
	
	bzero(&addr, sizeof(addr));
	addr.sin_family = AF_INET;
	addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	addr.sin_port = htons(PORT);
	
	conn_t = connect(sock, (struct sockaddr *)&addr, sizeof(addr));
	if(conn_t < 0){
		printf("Waiting for Open Server..\n");
	}
	else
		printf("Connected to server!!!\n");

	while(conn_t < 0){ 
		conn_t = connect(sock, (struct sockaddr *)&addr, sizeof(addr));
		if(conn_t == 0){
			printf("Connected to server!!!\n");
		}
	}	
	
	while(1){	
		i = 0;	
		printf("Client -> Server(exit: 'q'): ");
		while(1){	
			buffer[i] = getchar();
			if(buffer[0] == 'q' && buffer[1] == '\n'){
				len = strlen(buffer) ;
				send_t = send(sock, buffer, strlen(buffer), 0);
				close(sock);	
				exit(0);	
			}
			if(buffer[i] == '\n')
				break;
			i++;
		}
			
		send_t = send(sock, buffer, strlen(buffer), 0);
		if(send_t < 0){
			perror("send ");
			return 1;
		}
		recv_t = recv(sock, buffer, 1024, 0);
		len = recv_t;	
		if(len < 0){
			perror("recv ");
			return 1;
		}

		buffer[len] = '\0';

		printf("Server -> Client : %s\n", buffer);
		memset(buffer, 0, sizeof(buffer));	
		} 
	close(sock);	
	return 0;
}
