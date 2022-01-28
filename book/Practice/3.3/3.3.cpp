#include <iostream>

using namespace std;

int main(){
    int degree, minutes, seconds;

    cout << "위도를 도, 분, 초 단위로 입력하시오:\n";
    cout << "먼저, 도각을 입력하시오: ";
    cin >> degree;
    cout << "다음에, 분각을 입력하시오: ";
    cin >> minutes;
    cout << "끝으로, 초각을 입력하시오: ";
    cin >> seconds;

    double result;
    const double Ms = 60;

    result = degree + (minutes / Ms) + (seconds / Ms);

    cout << degree << "도, " << minutes << "분, " << seconds << "초 = " << result << "도\n";

    return 0;
}
