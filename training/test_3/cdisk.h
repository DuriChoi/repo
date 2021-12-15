#ifndef _CDISK_H_
#define _CDISK_H_

#include "base.h"

class CDisk : public Base
{
public :
	CDisk() ;
	~CDisk() ;

	virtual int stop() ;
	int play() ;

	virtual int pause() ;
private :

public :

private :

};

#endif
