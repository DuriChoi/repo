#include <stdio.h>
#include <cstring>
#include <string>
using namespace std;

int main(){
	const char* pText = "1234";
	char szText[1] = {'1','2','3','4'};
	printf("pText: %s\n", pText);
	printf("szText: %s\n", szText);
	printf("%c\n", szText[0]);	
	printf("(int)strlen(szText): %d\n",(int)strlen(szText));
	printf("1234의 문자길이: %d\n",(int)strlen("1234"));

	return 0;
}
