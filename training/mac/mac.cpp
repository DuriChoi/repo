#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isThereMAC(const char* pch){
	printf("%s\n", pch);
	for(int i=0;i<static_cast<int>(strlen(pch));i++){
		printf("%c\n", pch[i]);
	}
	

	return 0;
}

int main(){
	char szText[128] = "Innopia 000974aabbcc Tech";
	int pos = isThereMAC(szText);
	//char szMac[32];
	printf("%d\n", pos);
	
	return 1;
}
