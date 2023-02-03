#include <iostream>

using namespace std;

class Car{
	private:
		int num;
		double gas;
	public:
		void show();
		void setNumGas(int n, double g);
};

void Car::show(){
	cout << "차량번호는 " << num << " 입니다." << endl;
	cout << "연료량은 " << gas << " 입니다." << endl;
}

void Car::setNumGas(int n, double g){
	if(g > 0 && g < 1000){
		num = n;
		gas = g;

		cout << "차량 번호를 " << num << " 으로, 연료량을 " << gas << "(으)로 바꿨습니다." << endl;
	}
	else{
		cout << g << " 은(는) 올바른 값이 아닙니다." << endl;
		cout << "못바꿈" << endl;
	}
}

int main(){
	Car car1;

	car1.setNumGas(1234, 20.5);
	car1.show();

	car1.setNumGas(1238, -10.0);
	car1.show();

	return 0;
}
