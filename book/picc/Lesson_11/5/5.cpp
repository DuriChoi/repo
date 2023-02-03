#include <iostream>

using namespace std;

struct car{
	int num;
	double gas;
};

void show(car* pC);

int main(){
	car car1 = {0, 0.0};

	cout << "차량번호: ";
	cin >> car1.num;

	cout << "가스량: ";
	cin >> car1.gas;

	show(&car1);

	return 0;
}

void show(car* pC){
	cout << "차량번호: " << pC->num << endl;
	cout << "가스량: " << pC->gas << endl;
}
