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
		Car(const Car& c);
		Car& operator=(const Car& c);
};

Car::Car(char* pN, int n, double g){
	pName = new char[strlen(pN)+1];
	strcpy(pName, pN);
	num = n;
	gas = g;
	cout << pName << "을(를) 생성했습니다." << endl;
}

Car::~Car(){
	cout << pName << "을(를) 소멸시킵니다." << endl;
	delete[] pName;
}

Car::Car(const Car& c){
	cout << c.pName <<"(으)로 초기화 합니다." << endl;
	pName = new char[strlen(c.pName)+strlen("의 복사본 1") +1];
	strcpy(pName, c.pName);	
	strcat(pName, "의 복사본 1");
	num = c.num;
	gas = c.gas;
}

Car& Car::operator=(const Car& c){
	cout << pName << "에 " << c.pName << "을 대입합니다." << endl;
	if(this != &c){
		delete[] pName;
		pName = new char[strlen(c.pName)+strlen("의 복사본 2")+1];
		strcpy(pName, c.pName);
		strcat(pName, "의 복사본 2");
		num = c.num;
		gas = c.gas;
	}
	return *this;
}

int main(){
	Car mycar((char*)"Mycar", 1234, 25.5);
	Car car1 = mycar;

	Car car2((char*)"Car2", 0, 0);
	car2 = mycar;
	
	return 0;
}
