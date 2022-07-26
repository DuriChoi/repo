#include <stdio.h>

char *getname(){
	static char name[128];
	printf("Input Name: ");
	scanf("%s", name);
		
	return name;
}

int main(){
	char *str = getname();
	printf("%s, I like you.\n", str);
	//lovecall();

	return 0;
}
