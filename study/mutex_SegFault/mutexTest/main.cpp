#include <cstdio>

#include "myTest.h"

using namespace std ;


int main()
{
	MyTest_init() ;

	const char* pStr ;
	char szText[128] ;	

	while(1)
	{
		pStr = fgets(szText, 128, stdin) ;

		if(*pStr == 'q')
		{
			break ;
		}else
			printf("종료하려면 q+enter 를 누르세요\n");
	}

	MyTest_destroy() ;

	printf("Bye~ ( ^ ^)/~ \n") ;

	return 1 ;
}

