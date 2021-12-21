#include <cstdio>
#include "cdp.h"

CDp::CDp(){
	#ifdef CONSTRUCTOR
		printf("CDp() - Constructor\n");
	#endif
}

CDp::~CDp(){
	#ifdef DESTRUCTOR
		printf("CDp() - Destructor\n");
	#endif
}

int CDp::stop(){
	printf("CDp - stop()\n");
	return 1;
}

int CDp::play(){
	printf("CDp - play()\n");
	return 2;
}

int CDp::pause(){
	printf("CDp - pause()\n");
	return 3;
}
int CDp::volUp(){
	printf("CDp - volUp()\n");
	return 4;
}
int CDp::volDown(){
	printf("CDp - volDown()\n");
	return 5;
}
