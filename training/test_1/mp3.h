#ifndef _MP3_H_
#define _MP3_H_

#include "base.h"

class MP3 : public Base
{
public :
	MP3() ;
	~MP3() ;

	int stop() ;
	int play() ;

	// no puase() ;

	// only MP3
	int delFile() ;

private :

public :

private :

};

#endif
