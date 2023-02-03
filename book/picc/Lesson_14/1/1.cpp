#include <iostream>

using namespace std;

class Car{
	private:
		int num;
		double gas;
	public:
		Car();
		static int sum;	
		Car(int n, double g);
		void setCar(int n, double g);
		void show();
};

class RacingCar : public Car{
	private:
		int course;
	public:
		RacingCar();
		RacingCar(int n, double g, int c);	
		void setCourse(int c);
};

int Car::sum = 0;

Car::Car(){
	num = 0;
	gas = 0.0;
	sum++;
	cout << "Made Car!!" << endl;

}

Car::Car(int n, double g){
	num = n;
	gas = g;
	cout << "Car 생성자" << endl;
	cout << "Made Num: " << num << " and Gas: " << gas << endl;
}


void Car::setCar(int n, double g){
	num = n;
	gas = g;
	cout << "setCar 생성자" << endl;	
	cout << "Changed Num: " << num << " and Gas: " << gas << endl;
}

void Car::show(){
	cout << "Num: " << num << endl;
	cout << "Gas: " << gas << endl;
}

RacingCar::RacingCar(){
	sum++;	
	course = 0;
	cout << "Made RacingCar!!" << endl;
}

RacingCar::RacingCar(int n, double g, int c) : Car(n, g){
	course = c;
	cout << "RacingCar : Car 생성자" << endl;
	cout << "Made Racing car of Cource num is " << c << endl;
}
void RacingCar::setCourse(int c){
	course = c;
	cout << "setCourse 생성자" << endl;
	cout << "Num of Course is " << course << endl;
}


int main(){
//	RacingCar rcar1;
//	rcar1.setCar(1234, 20.5);
//	rcar1.setCourse(5);
	RacingCar rccar1(1234, 20.5, 5);
	cout << "Sum of made car: " << rccar1.sum << endl;
	
	return 0;
}
