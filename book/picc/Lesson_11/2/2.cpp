#include <iostream>

using namespace std;

struct Car{
	int num;
	double gas;
};

int main(){
	Car car1;

	cout << "차량 번호를 입력하세요" << endl;
	cin >> car1.num;

	cout << "연료량 입력해" << endl;
	cin >> car1.gas;

	cout << "차량 번호는 " << car1.num << " : 연료량은 " << car1.gas << "입니다." << endl;

	return 0;
}
