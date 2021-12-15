#ifndef _BASE_H_
#define _BASE_H_

class Base
{
public :
	Base() ;
	~Base() ;

	virtual int stop() = 0 ;
	virtual int play() = 0 ;

	virtual int pause() = 0 ;

	virtual int volUp() ;
	virtual int volDown() ;


private :

public :

private :

};

#endif
