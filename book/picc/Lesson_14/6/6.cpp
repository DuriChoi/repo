#include <iostream>
#include <typeinfo>

using namespace std;

class Vehicle{
	protected:
		int speed;
	public:
		void setSpeed(int s);
		virtual void show() = 0;
};

class Car : public Vehicle{
	private:
		int num;
		double gas;
	public:
		Car(int n, double g);
		void show();
};

class Plane : public Vehicle{
	private:
		int flight;
	public:
		Plane(int f);
		void show();
};

void Vehicle::setSpeed(int s){
	speed = s;
	cout << "속도를 " << speed << "로 변경했습니다." << endl;
	}

Car::Car(int n, double g){
	num = n;
	gas = g;
	cout << "차량 번호가 " << num << "이고, 연료량이 " << gas << "인 자동차가 만들어졌습니다." << endl;
}

void Car::show(){
	cout << "차량 번호는 " << num << "입니다." << endl;
	cout << "연료량은 " << gas << "입니다." << endl;
	cout << "속도는 " << speed << "입니다." << endl;
}

Plane::Plane(int f){
	flight = f;
	cout << "비행기 번호가 " << flight << "인 비행기가 만들어졌습니다." << endl;
}

void Plane::show(){
	cout << "비행기 번호는 " << flight << "입니다." << endl;
	cout << "비행기 속도는 " << speed << "입니다." << endl;
}

int main(){
	Vehicle* pVc[2];
	Car car1(1324, 20.5);
	Plane pln1(232);

	pVc[0] = &car1;
	pVc[1] = &pln1;

//	decltype(*pVc[0])
	for(int i = 0; i < 2; i++){
		if(typeid(*pVc[i]) == typeid(Car)){
			cout << (i+1) << "번째 객체는 " << typeid(Car).name() << "의 객체입니다." << endl;
			cout << typeid(*pVc[i]).name() << endl;
		}
		else
			cout << (i+1) << "번째 객체는 " << typeid(*pVc[i]).name() << "의 객체입니다." << endl;
	}
	return 0;
}
