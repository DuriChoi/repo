#include <iostream>

using namespace std;

double thousandmoon(double);

int main(){
    double tsm;
    double ly;

    cout << "광년 수를 입력하고 Enter 키를 누르십시오: ";
    cin >> ly;
    tsm = thousandmoon(ly);

    cout << ly << " 광년은 " << tsm << " 천문 단위입니다." << endl;

    return 0;
}

double thousandmoon(double d){
    return d*63240;
}
