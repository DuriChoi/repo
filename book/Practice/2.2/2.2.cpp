#include <iostream>

using namespace std;

double mtok(double);

int main(){
    double mile;
    double kilo;

    cout << "킬로미터로 환산할 마일을 입력하세요: ";
    cin >> mile;
    kilo =  mtok(mile);

    cout << mile <<"마일은 " << kilo << "킬로미터이다." << endl;

    return 0;
}

double mtok(double d){
    return 1.60934 * d;
}
