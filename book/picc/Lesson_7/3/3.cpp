#include <iostream>

using namespace std;

template <class T>

T maxt(T x, T y){
	if(x > y)
		return x;
	else
		return y;
}

int main(){
	int a, b;
	double da, db;

	cout << "input two integers" << endl;
	cin >> a >> b;

	cout << "input two decimals" << endl;
	cin >> da >> db;

	int ans1 = maxt(a, b);
	double ans2 = maxt(da, db);

	cout << "max integer: " << ans1 << endl;
	cout << "max decimal: " << ans2 << endl;

	return 0;
}
