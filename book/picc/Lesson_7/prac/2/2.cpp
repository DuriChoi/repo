#include <iostream>

using namespace std;

inline int square(int x);
inline double square(double x);

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

inline int square(int x){
	return x*x;
}

inline double square(double x){
	return x*x;
}
