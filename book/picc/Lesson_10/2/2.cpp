#include <iostream>

using namespace std;

void func();

int a = 0;

int main(){
	for(int i = 0; i < 5; i++)
		func();

	return 0;
}

void func(){
	int b = 0;
	static int c = 0;
	
	cout << "변수 a는 " << a << ", 변수 b는 " << b << ", 변수 c는 " << c << "입니다." << endl;
	a++;
	b++;
	c++;
}
