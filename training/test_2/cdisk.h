#ifndef _CDISK_H_
#define _CDISK_H_

#include "base.h"

class CDisk : public Base
{
public :
	CDisk() ;
	~CDisk() ;
//가상함수 사용
	virtual int stop() ;
	int play() ;
//가상함수 사용
	virtual int pause() ;
private :

public :

private :

};

#endif
