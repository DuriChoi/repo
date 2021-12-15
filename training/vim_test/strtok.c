#include <stdio.h>
#include <string.h>

int main(){
	char szData[128] = "1,KT-M770,,,SI21101000001,WiFi,00097411AB33";

	char szOrigin[128];
	char *tmp;
	char *ptr;
	char szSerial[32];
    char szMAC[32];

    int i = 0;
    char *temp[32];

   	strcpy(szOrigin, szData);
	tmp = szOrigin;
	while((ptr = strsep(&tmp, ",")) != NULL){	
		temp[i]=ptr;
		//printf("temp[%d]: %s\n",i, temp[i]);
		i++;
	}
	strcpy(szSerial, temp[4]);
	strcpy(szMAC, temp[6]);

	printf("%s\n", szSerial);
	printf("%s\n", szMAC);

	return 0;
}
