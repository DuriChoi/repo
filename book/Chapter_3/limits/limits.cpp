#include <iostream>
#include <climits>

using namespace std;

int main(){
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;

    cout << "데이터형 크기" << endl; 
    cout << "int는 " << sizeof(int) << " 바이트이다.(sizeof(int))" << endl;
    //cout << "int는 " << sizeof n_int << " 바이트이다.(INT_MAX)" << endl;
    cout << "short는 " << sizeof(n_short) << " 바이트이다." << endl;
    cout << "long은 " << sizeof (n_long) << " 바이트이다." << endl;

    cout << "\n최댓값" << endl;
    cout << "int: " << int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;

    cout << "\n최솟값" << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;

    cout << "\n비트수" << endl;
    cout << "char: " << CHAR_BIT << endl;

    return 0;
}
