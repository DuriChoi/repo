#include <cstdio>
#include "lpp.h"

LPp::LPp(){
	#ifdef CONSTRUCTOR
		printf("LPp() - Constructor\n");
	#endif
}

LPp::~LPp(){
	#ifdef DESTRUCTOR
		printf("LPp() - Destructor\n");
	#endif
}

int LPp::stop(){
	printf("LPp - stop()\n");
	return 11;
}

int LPp::play(){
	printf("LPp - play()\n");
	return 22;
}

int LPp::pause(){
	printf("LPp - pause()\n");
	return 33;
}
int LPp::volUp(){
	printf("LPp - volUp()\n");
	return 44;
}
int LPp::volDown(){
	printf("LPp - volDown()\n");
	return 55;
}
int LPp::player(){
    printf("노래 재생: p, 노래 정지: s, 노래 일시정지: a, 볼륨업: u, 볼륨다운, d, 바늘변경: c, 플레이어 선택: q\n");
    printf("input: ");
    return 0;
}
int LPp::changeNiddle(){
    printf("\n바늘을 바꿉니다.\n");
    return 0;
}
