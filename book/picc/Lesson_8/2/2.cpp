#include <iostream>

using namespace std;

int main(){
	int a;
	int *pA;

	a = 5;
	pA = &a;

	cout << "a is " << a << endl;
	cout << "Address of a is " << &a << endl;
	cout << "Pointer A is " << pA << endl;
	cout << "*pA is " << *pA << endl;

	return 0;
}
