#include <iostream>

using namespace std;

int main(){
    int auks, bats, coots;

    auks = 19.99 + 11.99;

    bats = (int) 19.99 + (int) 11.99; //C Style
    coots = int (19.99) + int (11.99); //C++ Style

    cout << "auks = " << auks << endl << "bats = " << bats << endl << "coots = " << coots << endl;

    char ch = 'Z';
    cout << "The code for " << ch << " is ";
    cout << int (ch) << endl;

    return 0;
}
