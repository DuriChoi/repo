#include <stdio.h>
#include <cstring>
//#include <netinet/in.h>
int main(){
	unsigned int a = 0xA1B2C3D4;
	char szText[4];
//	unsigned long big_a = htonl(a);
	
	for(int i=0;i<4;i++){
		szText[i] = (a >> 8*(3-i)) & 0xff;
		printf("szText[%d]: 0x%02X\n",i, szText[i] & 0xff);
	}
	
	unsigned int b ;

	b = (szText[0] & 0xff) << 24 |
	(szText[1] & 0xff)<< 16 | 
	(szText[2]& 0xff) << 8 |
	(szText[3]& 0xff) ;

	printf("b : 0x%08X\n", b) ;
	return 0;
}
