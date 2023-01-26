#include <iostream>

using namespace std;

int main(){
	int res;
	char ans;

	cout << "몇 번째 코스를 선택 하시겠습니까?\n";
	cout << "정수를 입력하십시오.\n";

	cin >> res;

	ans = (res==1) ? 'A' : 'B';

	cout << ans << "코스를 선택했습니다.\n";

	return 0;
}
