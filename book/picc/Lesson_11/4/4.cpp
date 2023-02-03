#include <iostream>

using namespace std;

struct Car{
	int num;
	double gas;
};

void show(Car c);

int main(){
	Car car1 = {0, 0.0};

	cout << "차량번호: " << endl;
	cin >> car1.num;

	cout << "연료량: " << endl;
	cin >> car1.gas;

	show(car1);

	return 0;
}

void show(Car c){
	cout << "차량 번호: " << c.num << endl;
	cout << "연료량: " << c.gas << endl;
}
