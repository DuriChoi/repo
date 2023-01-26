#include <iostream>

using namespace std;

int square(int x);

int main(){
	int a, result;
	cout << "input integer" << endl;
	cin >> a;
	result = square(a);
	
	cout << "square of " << a << " is " << result << endl; 
	return 0;

}

int square(int x){
	return x*x;
}

