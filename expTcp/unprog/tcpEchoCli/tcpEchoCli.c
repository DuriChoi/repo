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
    int sock;
    struct sockaddr_in addr;
    char buffer[1024];
	int len;
	int i; 
	while(1){	
		i = 0;	
		if((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0){
        perror("socket ");
        return 1;
		}

		bzero(&addr, sizeof(addr));
		addr.sin_family = AF_INET;
		addr.sin_addr.s_addr = inet_addr("127.0.0.1");
		addr.sin_port = htons(PORT);

		if(connect(sock, (struct sockaddr *)&addr, sizeof(addr)) < 0){
			perror("connect ");
			return 1;
		}
		printf("Input string: ");
	
		while(1){	
			buffer[i] = getchar();
				if(buffer[i] == '\n')
					break;
				i++;
		}
			
		len = strlen(buffer) ;

		if(send (sock, buffer, strlen(buffer), 0) < 0){
			perror("send ");
			return 1;
		}
		if((len = recv(sock, buffer, 1024, 0)) < 0){
			perror("recv ");
			return 1;
		}

		buffer[len] = '\0';

		printf("recevied data : %s\n", buffer);
		memset(buffer, 0, sizeof(buffer));	
	
		close(sock);
	}
   
	return 0;
}
