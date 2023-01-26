#include <iostream>

using namespace std;

void swap(int *pX, int *pY){
	int tmp;
	
	tmp = *pX;
	*pX = *pY;
	*pY = tmp;
}
int main(){
	int a = 5;
	int b = 10;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	cout <<"swap a and b" << endl;
	swap(a, b);

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	
	return 0;
}

	
