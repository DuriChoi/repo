#include <iostream>

using namespace std;

double fahrenheit(double);

int main(){
    double c, f;

    cout << "섭씨 온도를 입력하고 Enter 키를 누르십시요: ";
    cin >> c;
    f = fahrenheit(c);
    cout << "섭씨 " << c << "도는 화씨로 " << f <<"도입니다." << endl;

    return 0;
}

double fahrenheit(double d){
    return 1.8*d+32;
}
