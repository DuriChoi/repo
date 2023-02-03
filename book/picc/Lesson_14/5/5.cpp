#include <iostream>

using namespace std;

class Car{
	protected:
		int num;
		double gas;
	public:
		Car();
		void setCar(int n, double g);
		virtual void show();
};

class RacingCar : public Car{
	private:
		int course;
	public:
		RacingCar();
		void setCource(int c);
		void show();
};

Car::Car(){
	num = 0;
	gas = 0.0;
	cout << "자동차가 만들어졌습니다." << endl;
}

void Car::setCar(int n, double g){
	num = n;
	gas = g;
	cout << "차량 번호를 " << num << "으로, 연료량을 " << gas << "으로 바꾸었습니다." << endl;
}

void Car::show(){
	cout << "차량 번호는 " << num << "입니다." << endl;
	cout << "연료량은 " << gas << "입니다." << endl;
}

RacingCar::RacingCar(){
	course = 0;
	cout << "레이싱 카가 만들어졌습니다." << endl;
}

void RacingCar::setCource(int c){
	course = c;
	cout << "코스 번호를 " << course << "로 했습니다." << endl;
}

void RacingCar::show(){
	cout << "레이싱 카의 차량 번호는 " << num << "입니다." << endl;
	cout << "연료량은 " << gas << "입니다." << endl;
	cout << "코스 번호는 " << course << "입니다." << endl;
}

int main(){
	Car* pCars[2];
	RacingCar* prcCar[1];

	Car car1;
	RacingCar rccar1;

	pCars[0] = &car1;
	pCars[0] -> setCar(1234, 20.5);

	pCars[1] = &rccar1;
	pCars[1] -> setCar(4567, 30.5);
	
	prcCar[0] = &rccar1;
	prcCar[0] -> setCource(23);

	for(int i = 0; i < 2; i++){
		pCars[i] -> show();
	}

	return 0;
}
