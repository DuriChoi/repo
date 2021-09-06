#include <stdio.h>

int main(){
	int a = 1;
	for(int ii=0;ii<5;ii++){	
		printf("%d\n",a^=1);	
	}

	int b[32];
	printf("%ld\n",sizeof(b)/sizeof(int));	
	return 0;
}	
