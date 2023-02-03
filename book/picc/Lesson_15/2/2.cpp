#include <iostream>
#include <cstring>

using namespace std;

class Car{
	private:
		int num;
		double gas;
		char* pName;
	public:
		Car(char* pN, int n, double g);
		~Car();
		void show();
};

Car::Car(char* pN, int n, double g){
	pName = new char[strlen(pN)+1];
	strcpy(pName, pN);
	num = n;
	gas = g;
	cout << pName << "을 생성했습니다." << endl;
}

Car::~Car(){
	cout << pName << "을 소멸시킵니다." << endl;
	delete[] pName;
}

void Car::show(){
	cout << "차량 번호는 " << num << "입니다." << endl;
	cout << "연료량은 " << gas << "입니다." << endl;
	cout << "이름은 " << pName << "입니다." << endl;
}

int main(){
	Car car1((char*)"Mycar", 1234, 25.5);
	car1.show();

	return 0;
}
