#include <iostream>

using namespace std;

class Base1{
	protected:
		int bs1;
	public:
		Base1(int b1 = 0){bs1 = b1;}
		void showBs();
};

class Base2{
	protected:
		int bs2;
	public:
		Base2(int b2 = 0){bs2 = b2;}
		void showBs();
};

class Derived : public Base1, public Base2{
	protected:
		int dr;
	public:
		Derived(int d = 0){dr = d;}
		void showDr();
};

void Base1::showBs(){
	cout << "bs1은 " << bs1 << "입니다." << endl;
}

void Base2::showBs(){
	cout << "bs2는 " << bs2 << "입니다." << endl;
}

void Derived::showDr(){
	cout << "dr은 " << dr << "입니다." << endl;
}

int main(){
	Derived drv;

	drv.Base1::showBs();
	drv.Base2::showBs();
	drv.showDr();

	return 0;
}
