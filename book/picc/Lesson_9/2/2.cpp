#include <iostream>

using namespace std;

int main(){
	const char* str = "Hello";
	char str2[] = "Hello_2";

	cout << str << endl;
	cout << str2 << endl;

	str = "good bye";

	cout << str << endl;
	cout << str2 << endl;

	return 0;
}
