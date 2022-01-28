#include <iostream>

using namespace std;

int main(){
    char ch = 'M';
    int i = ch;

    cout << ch << "의 ASCII 코드는 " << i << "입니다." << endl << endl;

    cout << ch << "에 1을 더해 보겠습니다." << endl;
    ch = ch + 1;
    i = ch;

    cout << ch << "의 ASCII 코드는 " << i << "입니다." << endl;

    //cout.put() 멤버 함수를 사용하여 char형 변수 ch를 출력
    cout << "cout.put(ch)를 사용하여 ch 출력: " ; 
    cout.put(ch);
    cout.put('!');
    cout << endl << "종료" << endl;

    return 0;
}
