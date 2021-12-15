#include "common.h"
#include <cstdio>

int Common::play(){
	printf("common - play()\n");
	
	return 1;
}

int Common::pause(){
	printf("common - pause()\n");
	
	return 2;
}

int Common::stop(){
	printf("common - stop()\n");
	
	return 3;
}

int Common::volUp(){
	printf("common - volUp()\n");
	
	return 4;
}

int Common::volDown(){
	printf("common - volDown()\n");
	
	return 5;
}
