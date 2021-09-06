#include <stdio.h>

int main(){
	int a, b;
	a=2;
	b=(a==1)?10:b;
	b=(a==2)?20:b;
	b=(a==3)?30:b;

	printf("b: %d\n", b);

	int c, d;
	c=4;
	d=(c==1)?10:((c==2)?20:((c==3)?30:d));
	printf("d: %d\n",d);
	
	return 0;
}
