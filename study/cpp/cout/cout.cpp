#include <iostream>

using namespace std;

int main(){
	cout << "Welcome C++" << endl;
	
	int i=123;
	char ch='A';
	double d=3.14;
	char str[]="문자열";

	cout <<"int i: "<<i<<"char ch: "<<ch<<d<<str<<endl;
	
	int j;
	cout<<"정수를 입력하십시오 : ";
	cin>>j;
	cout<<"입력한 값은 " <<j<<"입니다."<<endl;
	return 0;
}
