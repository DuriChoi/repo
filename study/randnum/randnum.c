#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int num, input;
	srand(time(NULL));
	for(;;){
		num = rand() % 100+1;
		printf("\n제가 만든 숫자를 맞춰 보세요.\n");
		do{
			printf("1~100 까지의 숫자를 입력하세요(끝낼 때는 999) : ");
			if (scanf("%d", &input) == 1){
				if(input==999){
					exit(0);
				}
				if(input==num){
					printf("맞췄습니다.!\n");
				}else if(input>num){
					printf("입력한 숫자보다 더 작습니다.\n");
				}else{
					printf("입력한 숫자보다 더 큽니다.\n");
				}	
			}else{
				printf("숫자만 입력 가능합니다.\n");
				exit(0);
			}
		}while(input!=num);	

	}
	return 0;
}

void randnum(){
	printf("1~100 까지의 숫자를 입력하세요 (끝낼 때는 999) : ");
	if(scanf("%d", &input) == 1){
		if(input==999){
			exit(0);
		}
		if(input==num){
			printf("맞췄습니당!\n");
		}else if(input>num){
			printf("입력한 숫자보다 더 작습니다.\n");
		}else if(input<num){
			printf("입력한 숫자보다 더 큽니다.\n");
		}
	}
}
