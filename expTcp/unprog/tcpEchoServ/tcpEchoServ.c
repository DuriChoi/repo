#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdlib.h> 

#define PORT 9876 
 
int main(void){
    struct sockaddr_in addr, client_addr;
    char buffer[1024];
	socklen_t cli_len;
    int recv_len;
	int sock, client_sock, bind_t, listen_t;	
	
	sock = socket(AF_INET, SOCK_STREAM, 0);
    if(sock < 0){
        perror("socket ");
        return 1;
    }
	
	bzero(&addr, sizeof(addr)); 
   
	addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = htonl(INADDR_ANY);
    addr.sin_port = htons(PORT);

	bind_t = bind(sock, (struct sockaddr *)&addr, sizeof(addr));
    if(bind_t < 0){
        perror("bind ");
        return 1;
    }
	
	listen_t = listen(sock, 5); 
    if(listen_t < 0){
        perror("listen ");
        return 1;
    }

	while(1){
		cli_len = sizeof(client_addr);
		printf("Waiting for Client..\n");
	
		client_sock = accept(sock, (struct sockaddr *)&client_addr, &cli_len);
		printf("\n**********************\n");	
		printf("Connected to Client!!!\n");	
		printf("Client ip : %s\n", inet_ntoa(client_addr.sin_addr));
		printf("**********************\n");	
		
		while(client_sock > 0){
			printf("Waiting for receive data by client\n");
			recv_len = recv(client_sock, buffer, 1024, 0);
			if(buffer[0] == 'q' && buffer[1] == '\n'){	
				client_sock = -1;
				break;
			}

			if(recv_len < 0){
				perror("recv ");
				return 1;
				break;
			}
			if(buffer[1] == '\0')
				break;
			buffer[recv_len] = '\0';
			printf("Client -> Server : %s", buffer);
			send(client_sock, buffer, strlen(buffer), 0);
			printf("Server -> Client : %s\n", buffer);
		}
	} 
	
	close(client_sock);	
	close(sock);
   
	return 0;
}
