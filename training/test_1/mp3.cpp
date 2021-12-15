#include "mp3.h"

#include <cstdio>

MP3::MP3()
{
#ifdef CONSTRUCTOR
	printf("MP3() - Constructor\n") ;
#endif
}

MP3::~MP3()
{
#ifdef CONSTRUCTOR
	printf("MP3() - Destructor\n") ;
#endif
}

int MP3::stop()
{
	printf("MP3 - stop()\n") ;

	return 1 ;
}

int MP3::play()
{
	printf("MP3 - play()\n") ;
	return 1 ;
}


int MP3::delFile()
{
	printf("MP3 - delFile() - only MP3\n") ;
	return 1 ;
}

