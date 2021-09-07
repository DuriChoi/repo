#include <stdio.h>
#include <cstring>
#include <string>
using namespace std;

int main(){
	const char* pText = "1234";
	char szText[4] = {'1','2','3','4'};
	printf("pText: %s\n", pText);
	printf("szText: %s\n", szText);
	printf("%c\n", szText[0]);	
	printf("(int)strlen(szText): %d\n",(int)strlen(szText));
	printf("1234의 문자길이: %d\n",(int)strlen("1234"));

	double num1, num2;
	double *pd;

	num1=3.14;
	pd=&num1;
	num2=*pd;

	printf("\n\nnum2의 값은 %.2f입니다.\n", num2);

	return 0;
}
