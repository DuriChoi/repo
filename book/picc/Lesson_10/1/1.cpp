#include <iostream>
using namespace std;

void func();

int a = 0;

int main(){
	int b = 1;

	cout << "main 함수에서는 변수 a와 b를 사용할 수 있습니다." << endl;
	cout << "변수 a의 값은 " << a << "입니다." << endl;
	cout << "변수 b의 값은 " << b << "입니다." << endl;
	//cout << "변수 c의 값은 " << c << "입니다." << endl;

	func();

	return 0;
}

void func(){
	int c = 2;

	cout << "func 함수에서는 a와 c를 사용할 수 있습니다." << endl;
	cout << "변수 a의 값은 " << a << "입니다." << endl;
//	cout << "변수 b의 값은 " << b << "입니다." << endl;
	cout << "변수 c의 값은 " << c << "입니다." << endl;
}
