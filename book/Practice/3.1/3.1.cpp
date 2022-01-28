#include <iostream>

using namespace std;

void mcm(int);

int main(){
    int height;
    cout << "키를 센치미터 단위인 정수로 입력하시오(3자리):___\b\b\b";
    cin >> height;

    mcm(height);

    return 0;
}

void mcm(int h){
    const int CM = 100; 
    int meter;
    int centimeter;

    meter = h/CM;
    centimeter = h%CM;

    cout << "키는 " << meter << "미터 " << centimeter << "센치미터 입니다." << endl;
}
