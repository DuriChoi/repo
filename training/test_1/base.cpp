#include "base.h"

#include <cstdio>

Base::Base()
{
#ifdef CONSTRUCTOR
	printf("Base() - Constructor\n") ;
#endif
}

Base::~Base()
{
#ifdef CONSTRUCTOR
	printf("Base() - Destructor\n") ;
#endif
}

int Base::stop()
{
	printf("Base - stop()\n") ;

	return 1 ;
}

int Base::play()
{
	printf("Base - play()\n") ;
	return 1 ;
}

int Base::pause()
{
	printf("Base - pause()\n") ;
	return 1 ;
}
