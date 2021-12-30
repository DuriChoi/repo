#include <cstdio>
#include "mp3p.h"

MP3P::MP3P(){ 
    #ifdef CONSTRUCTOR 
         printf("mp3() - Constructor\n");
	#endif
}

MP3P::~MP3P(){
#ifdef DESTRUCTOR
		printf("mp3() - Destructor\n");
	#endif
}

int MP3P::stop(){
	printf("LPp - stop()\n");
	return 111;
}

int MP3P::play(){
	printf("mp3 - play()\n");
	return 222;
}

int MP3P::pause(){
	printf("mp3 - pause()\n");
	return 333;
}
int MP3P::volUp(){
	printf("mp3 - volUp()\n");
	return 444; 
}
int MP3P::volDown(){
	printf("mp3 - volDown()\n");
	return 555;
}
int MP3P::player(){
    printf("노래 재생: p, 노래 정지: s, 노래 일시정지: a, 볼륨업: u, 볼륨다운: d, 플레이어 선택: q\n");
    printf("input: ");
    return 0;
}
