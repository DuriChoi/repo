#include <stdio.h>
#include <string.h>

int main(){
	char szData[128] = "1,KT-M770,32,35,SI21101000001,WiFi,00097411AB33";
	char szSerial[32];  
	char szMAC[32];
	
	int i = 0;
	char *temp[32];
	
	char *szptr = strtok(szData, ",");	
	while(szptr != NULL){
		szptr = strtok(NULL, ",");
		temp[i]=szptr;
	//	printf("temp[%d]: %s\n",i, temp[i]);	
		i++;
	}
//	printf("%s\n", temp[3]);
	
	strcpy(szSerial, temp[3]);
	strcpy(szMAC, temp[5]);

	printf("%s\n", szSerial);
	printf("%s\n", szMAC);

	return 0;
}
