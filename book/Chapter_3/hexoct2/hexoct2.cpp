#include <iostream>

using namespace std;

int main(){
    int chest(42);
    int waist(42);
    int inseam(42);

    cout << "손님 몸매는 한마디로 끝내 줍니다!(길현이가 보면 안되는뎅 ㅡ_ㅡ)" << endl;
    cout << "가슴둘레: " << chest << "(10진수)" << endl;
    cout << hex;
    cout << "허리둘레: " << waist << "(16진수)" << endl;
    cout << oct;
    cout << "인심길이: " << inseam << "(8진수)" << endl;

    cout << "Year: " << &chest << endl;

    return 0;
}
