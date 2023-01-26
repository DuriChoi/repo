#include <iostream>

using namespace std;

int main(){
	int a = 5;
	int &rA = a;

	cout << "변수 A 의 값은 " << a << "입니다." << endl;
	cout << "레퍼런스 rA 의 값은 " << rA << "입니다." << endl;

	rA = 50;

	cout << "rA에 50을 대입했다." <<endl;
	cout << "레퍼런스 rA의 값은 " << rA << "(으)로 변경 됐다." << endl;
	cout << "변수 a 의 값도 " << a << "(으)로 변경됐다." << endl;
	cout << "변수 a 의 주소는 " << &a << "입니다." << endl;
	cout << "레퍼런스 a의 주소도 " << &rA << "입니다." << endl;

	return 0;
}
