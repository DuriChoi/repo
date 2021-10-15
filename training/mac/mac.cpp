#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isThereMAC(const char* pMacSrc){
	printf("%s\n", pMacSrc);
	for(int i=0;i<static_cast<int>(strlen(pMacSrc));i++){
		printf("isalpha(\'%c\'): %d\n",pMacSrc[i], isalpha(pMacSrc[i]));
	}
	printf("isalpha(%c): %d\n", 'a', isalpha('a'));
	return 0;
}

int main(){
	char szText[128] = "Innopia 000974aabbcc Tech";
	int pos = isThereMAC(szText);
	char szMac[32];
	
	printf("%d\n", pos);
	
	return 1;
}
