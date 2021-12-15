#include <cstdio> 

#include "cdisk.h"
#include "mp3.h"

using namespace std ;


int main(int argc, char** argv)
{

	MP3 mp3;
	mp3.stop() ;
	mp3.play() ;
	mp3.pause() ;
	mp3.delFile() ;
	printf("\n") ;

	CDisk cdisk ;
	cdisk.stop() ;
	cdisk.play() ;
	cdisk.pause() ;
	printf("\n") ;

	Base base ;
	base.stop() ;
	base.play() ;
	base.pause() ;
	printf("\n") ;

	Base* player ;
	printf("===== Base* pMp3 = new MP3 =====\n") ;
	player = new MP3 ;
	player->stop() ;
	player->play() ;
	player->pause() ;
//	player pMp3->delFile() ;  // ERROR
	delete player ;
	printf("\n") ;

	printf("===== Base* pCD = new CDisk =====\n") ;
	player = new CDisk ;
	player->stop() ;
	player->play() ;
	player->pause() ;
	delete player ;

	return 1 ;
}



