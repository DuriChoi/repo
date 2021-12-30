#include <iostream>

void simon(int);

using namespace std;

int main(){
    simon(3);
    cout << "정수를 하나 고르시오: ";
    int count;
    cin >> count;

    simon(count);
    cout << "끝!" << endl;
    return 0;
}

void simon(int n){
    cout << "Simon왈, 발가락을 " << n <<"번 두드려라." << endl;
}


