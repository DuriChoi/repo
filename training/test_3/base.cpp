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

int Base::volUp()
{
	printf("Base - Volume UP~\n") ;
	return 1 ;
}

int Base::volDown()
{
	printf("Base - Volume Down~\n") ;
	return 1 ;
}
