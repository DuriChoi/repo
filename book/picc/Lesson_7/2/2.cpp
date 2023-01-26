#include <iostream>

using namespace std;

int buy(int x, int y){
	int z;

	cout << x << "만원 짜리, " << y << "만원 짜리 차량을 구입했습니다." << endl;

	z = x + y;

	return z;
}

int main(){
	int num1, num2, sum;

	cout << "how much??" << endl;
	cin >> num1;

	cout << "how much???" << endl;
	cin >> num2;

	sum = buy(num1, num2);

	cout << "Total: " << sum << "만원" << endl;

	return 0;
}
