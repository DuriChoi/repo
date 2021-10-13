#include <stdio.h>
#include <string.h>

int main(int argc, char** argcv){
        char a[32] = {'a', 'b', 'c', 'd', '\0'} ;
        char b[32] = {'x', 'y', 'z', '\0'} ;
        char c[32] = {'5', '6', '7', '8', '9', '\0'} ;

        printf("%c\n", a[2]) ; // print c
        printf("%c\n", &a[2]) ;  // Error
       //  printf("%c\n", *a[2]) ;  // Error

        //printf("%s\n", a) ;

        char* pa = a ;  // pa = &a[0]
        char* pb = b ;  // pb = &b[0]
        char* pc = c ;  // pc = &c[0]

        char szDest[32] ;

        //strcpy(szDest, a) ; // ok
        //strcpy(szDest, &a[0]) ; // ok
        //strcpy(szDest, &a[2]) ; // ok
        // strcpy(szDest, &a) ; // ERROR~!!

        strcpy(szDest, pa) ;
        //strcpy(szDest, &pa[0]) ; // OK~?? Why?

        char** ppa ;

        // ppa = &a ;   // Error
        ppa = &(pa) ; // error
		printf("%d\n",**ppa);
        pa = &a[0] ;
        ppa = &pa ;

        return 1 ;
}
