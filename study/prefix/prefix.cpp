#include <stdio.h>

int main(){
	int val=0;
	int result;

	result = (++val) + (++val) + (++val);
	printf("%d\n",result);

	result = ++val;
	printf("%d\n",result);

	result= ++val;
	printf("%d\n",result);

	printf("val = %d, result = %d\n", val, result);
	
	return 0;
}	
