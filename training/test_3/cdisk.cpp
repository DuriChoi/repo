#include "cdisk.h"

#include <cstdio>

CDisk::CDisk()
{
#ifdef CONSTRUCTOR
	printf("CDisk() - Constructor\n") ;
#endif
}

CDisk::~CDisk()
{
#ifdef CONSTRUCTOR
	printf("CDisk() - Destructor\n") ;
#endif
}

int CDisk::stop()
{
	printf("CDisk - stop()\n") ;

	return 1 ;
}

int CDisk::play()
{
	printf("CDisk - play()\n") ;
	return 1 ;
}

int CDisk::pause()
{
	printf("CDisk - pause()\n") ;
	return 1 ;
}
