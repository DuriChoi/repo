#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int input_int;
	
	while(1){
	cout << "정수를 입력하세요(0: 종료): ";
	cin >> input_int;
		if(input_int > 0){
			if(fmod(input_int,2) == 0)
				cout << input_int << "(은)는 짝수입니다.\n";
			else
				cout << input_int << "(은)는 홀수입니다.\n";
		}
		else if(input_int == 0)
			break;
		else
			cout << "정수가 아닙니다.\n";
	}
	return 0;
}
