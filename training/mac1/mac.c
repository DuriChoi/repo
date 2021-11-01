#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_SIZE 12 //배열사이즈
#define INDEX_SIZE 22

int isThereMAC(const char* pMacSrc){
	//printf("%s\n", pMacSrc);
	int sum=1;	
	int index=-1;
	
	for(int i=0;i<(int)(strlen(pMacSrc));i++){
		if(isxdigit(pMacSrc[i])!=0){
			if((isxdigit(pMacSrc[i-1]))==0){
				sum=1;
			}else sum++;		
			for(int j=i;j<i+MAX_SIZE;j++){
				if(sum==MAX_SIZE){
					index=j-INDEX_SIZE;
				} 
			}
		}	
	}
	return index;
}

int main(){
//	char szText[128] = "ABCDEF0 abcdefadcdef GHI Z  0123456789 abcdef";
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
