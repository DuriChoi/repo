#include <iostream>

using namespace std;

void three();
void see();

int main(){
    three();
    three();
    see();
    see();

    return 0;
}

void three(){
    cout << "Three blind mice" << endl;
}

void see(){
    cout << "See how they run" << endl;
}
