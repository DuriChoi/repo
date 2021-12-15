#include <cstdio> 

#include "cdisk.h"
#include "mp3.h"

using namespace std ;

int main(int argc, char** argv)
{
	Base* player ;

	printf("===== Base* pMp3 = new MP3 =====\n") ;
	player = new MP3 ;
	player->stop() ;
	player->play() ;
	player->pause() ;
//	player->delFile() ;  // ERROR
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



