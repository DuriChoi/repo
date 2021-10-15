#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isThereMAC(const char* pMacSrc){
	//printf("%s\n", pMacSrc);
	int start;
	for(int i=0;i<(int)(strlen(pMacSrc));i++){
		if(isalpha(pMacSrc[i]) == 0 && pMacSrc[i] == '0'){	
			start=i;	
			break;		
		}else
			start=-1;
	}
	return start;
}

int main(){
	char szText[128] = "Innopia 000974aabbcc Tech";
	//	char szText[128] = "INNOPIA";	
	int pos = isThereMAC(szText);
	char szMac[32];
	if(pos == -1){
		printf("MAC이 없습니다.\n");
	}else{
		for(int j=0;j<12;j++){
			szMac[j] = szText[pos];
			pos++;
		}
	printf("MAC : %s\n", szMac);	
	}
	return 1;
}
