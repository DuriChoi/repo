#include <stdio.h>

int main(){
	int a=30;

	int b[32];
	printf("%ld\n",sizeof(b));

	printf("%d\n",a%16);
	printf("%d\n",a&0x0f);
	
	int c, d;
	c==1? d=10: c==2?d=20:c==3?d=30:c=3;
	
	return 0;
}
