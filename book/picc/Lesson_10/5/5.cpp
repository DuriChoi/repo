#include <iostream>
#include "myfunc.h"

using namespace std;

int main(){
	int num1, num2, ans;

	cout << "첫 번째 정수를 입력하세요." << endl;
	cin >> num1;

	cout << "두 번째 정수를 입력하세요." << endl;
	cin >> num2;

	ans = max(num1, num2);

	cout << "최댓값은 " << ans << "입니다." << endl;

	return 0;
}
