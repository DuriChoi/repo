#include <stdio.h>
#include <cstring>

struct tag_Friend{
	char Name[10];
	int Age;
	double Height;
};

int main(){
	tag_Friend *pF = new tag_Friend;
	strcpy(pF -> Name,"최두리");
	pF -> Age = 33;
	pF -> Height = 178.9;
	printf("이름: %s, 나이: %d, 키: %.1lf\n",pF -> Name, pF -> Age, pF -> Height);
	delete pF;

	return 0;
}
