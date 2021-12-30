#include <iostream>

using namespace std;

int main(){
    string name;
    string address;

    cout << "이름을 입력하시오: ";
    cin >> name;
    cin.ignore(100, '\n'); //버퍼 안지워주면 주소를 못받는다. 
    cout << "주소를 입력하시오: ";
    getline(cin, address);

    cout << name << "의 주소는 " << address << " 이다." << endl;

    return 0;
}
