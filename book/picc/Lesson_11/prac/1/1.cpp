#include <iostream>

using namespace std;

struct Person{
	int age;
	double weight;
	double height;
};

void aging(Person* p);

int main(){
	Person p1;
	Person p2;
	
	for(int i = 0; i < 2; i++){
		if(i == 0){
			cout << "Input Age" << endl;
			cin >> p1.age;

			cout << "Input Weight" << endl;
			cin >> p1.weight;

			cout << "Input Height" << endl;
			cin >> p1.height;
		}
		else{
			cout << "Input Age" << endl;
			cin >> p2.age;

			cout << "Input Weight" << endl;
			cin >> p2.weight;

			cout << "Input Height" << endl;
			cin >> p2.height;
		}
	}
	cout << "나이 " << p1.age << " 몸무게 " << p1.weight << " 키 " << p1.height << "입니다." << endl;
	cout << "나이 " << p2.age << " 몸무게 " << p2.weight << " 키 " << p2.height << "입니다." << endl;
	
	cout << "1년이 지났습니다." << endl;

	aging(&p1);
	aging(&p2);

	cout << "나이 " << p1.age << " 몸무게 " << p1.weight << " 키 " << p1.height << "입니다." << endl;
	cout << "나이 " << p2.age << " 몸무게 " << p2.weight << " 키 " << p2.height << "입니다." << endl;
	
	return 0;
}

void aging(Person* p){
	p->age++;
}
