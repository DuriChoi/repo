#include <stdio.h>
#include <cstring>

int main(){
	unsigned int a = 0xA1B2C3D4;
	char szText[4];

	memcpy(szText, &a, 4);
	
	for(int i=3;i>=0;i--){
		printf("szText[%d] = 0x%X\n",-(i-3),(a &( 0xff << i*8))  >> i*8 );
	}
	
	return 0;
}
