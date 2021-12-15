#include <stdio.h>
#include <iostream>

int main(){
	int *pi = new int;
	double *pd = new double;
	char *pc = new char;

	*pi = 123;
	*pd = 3.14;
	*pc = 'c';

	printf("size of *pi: %d\n", (int)sizeof(*pi));	
	printf("size of *pd: %d\n", (int)sizeof(*pd));	
	printf("size of *pc: %d\n", (int)sizeof(*pc));	
	printf("\n");

	printf("*pi=%d\n",*pi);
	printf("*pd=%.2lf\n",*pd);
	printf("*pc=%c\n",*pc);

	delete pi;
	delete pd;
	delete pc;

	return 0;
}
