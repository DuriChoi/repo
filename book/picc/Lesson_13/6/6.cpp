#include <iostream>

using namespace std;

//Car Class 선언

class Car{
	private:
		int num;
		double gas;
	public:
		static int sum;
		Car();
		void setCar(int n, double g);
		void show();
		static void showSum();
};

Car::Car(){
	num = 0;
	gas = 0.0;
	sum++;
	cout << "자동차가 만들어졌습니다." << endl;
}

void Car::setCar(int n, double g){
	num = n;
	gas = g;

	cout << "차량 번호를 " << num << " 으로, 연료량을 " << gas << " 으로 바꿨습니다. " << endl;
}

void Car::showSum(){
	cout << "자동차는 모두 " << sum << " 대 있습니다." << endl;
}

void Car::show(){
	cout << "차량 번호는 " << num << " 입니다." << endl;
	cout << "연료량은 " << gas << " 입니다." << endl;
}

int Car::sum = 0;

int main(){
	Car::showSum();

	Car car1;
	car1.setCar(1234, 20.5);

	Car::showSum();

	Car car2;
	car2.setCar(4567, 30.5);

	Car::showSum();

	return 0;
}
