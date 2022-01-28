#include <iostream>
#include <cmath>

using namespace std;

int main(){
    const double FEET_TO_INCH = 12; 
    const double INCH_TO_METER = 0.0254; 
    const double POUNDS_TO_KILOGRAM = 2.2;

    double h_feet;
    double h_inch;
    double w_pounds;
    
    double trans_h_inch;
    double trans_h_meter;
    double trans_w_kilogram; 
    double bmi;

    cout << "키를 피트와 인치 단위로 입력하세요.\n";
    cout << "피트: ";
    cin >> h_feet;
    cout << "인치: ";
    cin >> h_inch;

    cout << "체중을 파운트 단위로 입력하세요: ";
    cin >> w_pounds;
    
    trans_h_inch = (h_feet*FEET_TO_INCH) + h_inch;

    trans_h_meter = trans_h_inch*INCH_TO_METER;
    trans_w_kilogram = w_pounds/POUNDS_TO_KILOGRAM;

    bmi = trans_w_kilogram / pow(trans_h_meter,2);
    cout << "당신의 BMI는 " << bmi << " 입니다.\n";

    return 0;
}
