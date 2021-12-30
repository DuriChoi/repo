#include <iostream>

using namespace std;

double stone2kg(double);

int main(){
    double stone;
    
    cout << "체중을 스톤 단위로 입력하시오: ";
    cin >> stone;
    double kgs = stone2kg(stone);
    cout << stone << "스톤은 " << kgs << "kg 입니다." << endl;
    
    return 0;
}

double stone2kg(double d){
    return 6.35 * d;
}
