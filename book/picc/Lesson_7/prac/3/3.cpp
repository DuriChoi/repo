#include <iostream>

using namespace std;

template <class T>
T square(T x);

int main(){
	int a, result_i;
	double b, result_d;
	
	cout << "input integer" << endl;
	cin >> a;
	result_i = square(a);
	
	cout << "input double" << endl;
	cin >> b;
	result_d = square(b);
	
	cout << a << " of square is " << result_i << endl;
	cout << b << " of square is " << result_d << endl;

	return 0;
}

template <class T>
T square(T x){
	return x*x;
}

