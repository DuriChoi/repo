#include <iostream>

using namespace std;

int main(){
    int carrots;

    cout << "당근을 몇 개 가지고 있니?\n";
    cin >> carrots;
    cout << "여기 두 개 더 있다.\n";
    carrots = carrots + 2;
    cout << "이제 당근은 " << carrots << "개 이다." << endl;

    return 0;
}
