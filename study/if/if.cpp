#include <stdio.h>

void gotoxy(int x, int y){
	printf("\033[%d;%df",y,x);
	fflush(stdout);
}

int main(){
	int i;

	printf("문자열을 출력할 위치를 입력하세요: ");
	if(scanf("%d",&i)==1){
		if(i==1){
			gotoxy(20,10);
		}else if(i==2){
			gotoxy(40,10);
		}else{
			gotoxy(60,10);
		}
	}else printf("Failed to read integer.\n");

	printf("Programmer\n");

	return 0;
}
