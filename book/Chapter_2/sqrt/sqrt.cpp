#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double area;
    double side;

    cout << "마루 면적을 평방피트 단위로 입력하시오: ";
    cin >> area;
    
    side = sqrt(area);
    cout << "사각형 마루라면 한 변이 " << side << "피트에 상당합니다.\n";
    cout << "멋지네요!" << endl;

    return 0;
}
    
