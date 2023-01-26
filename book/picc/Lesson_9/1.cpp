#include <iostream>

using namespace std;

int main(){
	int test[5] = {80, 60, 55, 22, 75};
	cout << "test[0] is " << test[0] << endl;
	cout << "Address of test[0] is " << &test[0] << endl;
	cout << "Value of test is " << test << endl;
	cout << "so value of *test is " << *test << endl;
	
	return 0;
}
