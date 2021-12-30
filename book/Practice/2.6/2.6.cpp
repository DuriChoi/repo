#include <iostream>

using namespace std;

void time(int, int);

int main(){
    int h, m;
    
    cout << "시간 값을 입력하시오: ";
    cin >> h;

    cout << "분 값을 입력하시오: ";
    cin >> m;

    time(h, m);

    return 0;
}

void time(int a, int b){
    if(a>=0 && a<=12){
        if(b>=0 && b<=59){
            cout << "시각: " << a << ":" << b << endl;
        }else{
            cout << "시간 입력이 잘못되었습니다." << endl;
        }
    }else{
        cout << "시간 입력이 잘못되었습니다." << endl;
    }
}
