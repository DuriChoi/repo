#include <stdio.h>

int main(){
	int p=0, m=1;
	int i;
	for(i=1;i<6;i++){
		
		m*=i;
		p+=m;
	}printf("%d\n", p);
	
	return 0;
}	
