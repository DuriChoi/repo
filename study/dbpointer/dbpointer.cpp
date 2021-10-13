#include <cstdio> 
#include <cstring> 
#include <ctype.h>

using namespace std ;

int FAIL_ex1_pointer(int* pa)
{
	*pa++ ;
	printf("\n1. *pa++: %d\n",*pa++);	
	pa++ ;
	printf("2. pa++: %d\n", pa++);	
	*pa++ ;
	printf("3. *pa++: %d\n", *pa++);	
	pa++ ;
	printf("4. pa++: %d\n", pa++);	
	*pa++ ;
	printf("5. *pa++: %d\n", *pa++);	
	return 1 ;
}

int FAIL_ex2_pointer(int* pa)
{
	*++pa;
	pa++;
	*++pa;
	pa++;
	*++pa;
	return 1;
}

int OK_ex1_pointer(int* pa)
{
	(*pa)++ ;
	pa++ ;
	(*pa)++ ;
	pa++ ;
	(*pa)++ ;
	return 1 ;
}

int pointer_Array(int** ppa)
{
	(**ppa)++ ;
	ppa++ ;
	(**ppa)++ ;
	ppa++ ;
	(**ppa)++ ;
	return 1 ;
}

int Array_Pointer(int* (*ppc)[3])
{
	// ppc 는 배열 포인터이다.
	// ppc 가 가리키는 배열의, 첫번째 항목을 가져와보자.

	// *ppc[3] ; 연산자 우선순위로 ppc 가 배열처럼 쓰이고 있다. 안된다.
	
	printf("=============== Function - Array Pointer\n") ;

	// ppc는 배열을 가리키는 포인터이다.
	// * 앞에 * 가 붙었으니 포인터의 값 (배열) 을 가져온다.
	// 아래는 포인터의 값(배열)의 첫번째 항목을 불러온다.
	(*ppc)[0] ;

	// 첫번째 항목의 값은 int* 이다.
	// 그러므로 첫번째 항목의 값의 값은 앞에 * 를 붙이면 될 것이다.
	*(*ppc)[0] ;

	// 찍어보자.
	printf("1 : %d\n", *(*ppc)[0]) ;
	printf("2 : %d\n", *(*ppc)[1]) ;
	printf("2 : %d\n", (**ppc)[2]) ;

	return 1 ;
}

int main(int argc, char** argv)
{
	int array[3] = {1, 2, 3} ;

	// 배열 array 의 모든 값을 1씩 증가시키고 싶다.
	//FAIL_ex1_pointer(array) ;
	FAIL_ex2_pointer(array);	
	for(int ii = 0; ii < 3; ii++)
		printf("prefix_array[%d] = %d\n", ii, array[ii]) ;
	printf("==================================\n");	
	FAIL_ex1_pointer(array);
	for(int ii = 0; ii < 3; ii++)
		printf("suffix_array[%d] = %d\n", ii, array[ii]);
	// ++ 연산자는 * 포인터와 우선순위가 같음. (soen.kr 5-4-가. 연산순위 참조)
	// 그러나 결합순서가 오른쪽 우선이므로, ++ 연산자가 먼저 실행됨.
	// 그러므로,
	// *ppa++ 는 *(ppa++) 와 같음.
	// ppa++ 가 먼저 실행되어 ppa 는 증가되었으나, 값에는 아무것도 안했음.
	// 결과적으로 포인터만 증가시키고 아무것도 안한 것임.

	// 참고로, array 크기는 3인데 위 포인터 증가는 5번 증가하고 있음. 
	// 즉, 다른 메모리 영역을 침범하고 있는 코드임.

	// ppa++ 와, *ppa++ 가 같다고 착각하면 안됨.

	printf("===============\n") ;
	OK_ex1_pointer(array) ;

	for(int ii = 0; ii < 3; ii++)
		printf("array[%d] = %d\n", ii, array[ii]) ;

	// 우선순위가 제일 높은 () 를 사용하여 * 연산자가 먼저 실행되도록 하여
	// 원하는 결과를 얻었음.

	// ==================================================
	// 포인터 배열 (포인터의 배열)
	
	// 말 그대로 포인터가 저장되는 배열임.
	int a = 1 ;
	int b = 2 ;
	int c = 3 ;

	int* pArr1[3] = {&a, &b, &c} ;
	
	printf("=============== Pointer Array\n") ;
	for(int ii = 0; ii < 3; ii++)
		printf("pArr1[%d] = %d\n", ii, *pArr1[ii]) ;

	pointer_Array(pArr1) ;
	printf("=============== Increased Pointer Array\n") ;
	for(int ii = 0; ii < 3; ii++)
		printf("pArr1[%d] = %d\n", ii, *pArr1[ii]) ;

	// pArr1 = &pArr1[0] ;
	// pArr1[0] 의 값은 포인터임.
	// 거기에 & 가 또 붙으니, 포인터의 포인터임.
	// 그래서 함수 인자 원형이 int** 가 됨.


	// ==================================================
	// 배열 포인터 (배열의 포인터, 배열을 가리키는 포인터)

	int array2[3] = {1, 2, 3} ;
	int (*pArr2)[3] = &array ; 	// 배열 자체를 넘겨줌.
	
	// 연산자 우선순위와 포인터 배열과 배열 포인터.

	int* pA[3] ;
	// 연산자 우선순위에 의해, * 보다 [] 가 먼저 수행됨.
	// [] 가 먼저 수행되므로, 닥치고 배열임.

	// 배열의 크기는 3이 될 것이고,
	// 배열에 들어가는 값은 int* 가 될 것임.

	int (*pB)[3] ;
	// 연산자 우선순위에 의해, pB는 포인터임.
	// 배열을 가리키는 포인터임.
	// 그 배열의 값은 int 임.

	;;;;;;;;;;;;;;;;;;;;;;;;;
	// 포인터 배열의 배열 포인터.
	
	// 포인터를 먼저 선언하고,
	// (*pC)
	// 배열을 가리킨다고 선언하고,
	// (*pC)[3]
	// 배열에 포인터가 저장된다(포인터 배열)고 선언하면, 아래처럼 됨.
	int* (*pC)[3] ;
	
	// 저~~ 위에 pArr1 포인터 배열이 저장되나 보자.
	// pC 는 배열 포인터이므로, 배열 자체를 넘겨준다.
	pC = &pArr1 ;

	Array_Pointer(&pArr1) ;
	// 함수 내 주석 참조.

	
	// 복잡하다고 벌써 좌절하면 안된다.
	// 좌절하더라도 15장. 함수포인터에서 좌절하자.

	char (*func(char **buf, char *(*strf[9])(void), int *pi))(unsigned short,unsigned (**)(const char *));


	return 1 ;
}

