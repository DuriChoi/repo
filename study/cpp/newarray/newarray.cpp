#include <stdio.h>
#include <cstring>

int main(){
	int *ar = new int[5];
	int i;

	for(i=0;i<5;i++){
		ar[i]=i+1;
		printf("ar[%d] = %d\n", i, ar[i]);
	}
	delete [] ar;

	return 0;
}
