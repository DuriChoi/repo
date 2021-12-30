//하나의 변수를 사용하고 출력

#include <iostream>

using namespace std;
int main(){
    int carrots = 25;

    cout <<" 나는 당근을 " << carrots << "개 가지고 있다.\n";

    carrots = carrots - 1;
    cout << "아삭아삭, 하나 먹었다! \n이제 당근은 " << carrots << "개이다." << endl;

    return 0;
}
