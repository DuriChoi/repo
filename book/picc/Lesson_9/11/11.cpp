#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char str[100];

	cout << "문자열을 입력하세요." << endl;
	cin >> str;
	cout << "문자열의 길이는 " << strlen(str) << " 입니다." << endl;

	return 0;
}
