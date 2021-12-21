#include <cstdio>

#include "common.h"
#include "cdp.h"

using namespace std;

int main(){
	char a, b;
	bool loop = true;
	
	CDp cdp;
	while(loop){
		printf("CDP: 1, LP: 2, MP3: 3");
		printf("\n재생할 플레이어 중 선택하세요 : ");
	
		a = getchar();
		fflush(stdin);	
		if(a=='1'){
			printf("CDP를 선택했습니다. 노래를 재생합니다.\n");
			printf("일시정지는 p, 정지는 s를 누르십시오.\n");
			getchar();
			b=getchar();	
			fflush(stdin);	
			if(b=='p'){
				cdp.pause();
			}else if(b=='s'){
				cdp.stop();
				break;	
			}
		}else if(a=='2'){
			printf("LP에서 노래를 재생합니다.\n");
			break;
		}else if(a=='3'){
			printf("MP3에서 노래를 재생합니다.\n");
			break;
		}
	}	
	return 0;
}
