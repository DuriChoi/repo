#include <stdio.h>

int main(){
	int i, j;
	//이등변 삼각형
	for(i=0;i<15;i++){
		for(j=15-1;j>i;j--){
			printf(" ");
		}

		for(j=0;j<2*i+1;j++){
			printf("*");
		}
		printf("\n");
	}
	//직각삼각형	
	for(i=0;i<15;i++){
		for(j=15;j>i;j--){
			printf(" ");
		}
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}	
	return 0;
}
