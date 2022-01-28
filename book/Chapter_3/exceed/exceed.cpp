#include <iostream>
#include <climits>

#define ZERO 0
using namespace std;

int main(){
    short Dohee = SHRT_MAX;
    unsigned short Insuk = Dohee;

    cout << "도희의 계좌에는 " << Dohee << "원이 들어있고, "
        << "인숙이의 계좌에도 " << Insuk << "원이 들어 있다." << endl;

    cout << "각자의 계좌에 1원씩 입금한다." << endl << "이제 ";
    Dohee = Dohee + 1;
    Insuk = Insuk + 1;

    cout << "도희의 잔고는 " << Dohee << "원이 되었고, "
        << "인숙이의 잔고는 " << Insuk << "원이 되었다." << endl;
    cout << "이럴수가!!! 도희가 나 몰래 대출을 했나??" << endl;

    Dohee = ZERO;
    Insuk = ZERO;

    cout << "도희의 계좌에는 " << Dohee << "원이 들어있고, "
        << "인숙이의 계좌에도 " << Insuk << "원이 들어 있다." << endl;

    cout << "각자의 계좌에 1원씩 출금한다." << endl << "이제 ";
    Dohee = Dohee - 1;
    Insuk = Insuk - 1;
    cout << "도희의 잔고는 " << Dohee << "원이 되었고, "
        << "인숙이의 잔고는 " << Insuk << "원이 되었다." << endl;
    cout << "이럴수가!!! 인숙이가 복권에 당첨되었나??" << endl;

    return 0;
}
