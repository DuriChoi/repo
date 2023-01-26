#include <iostream>
#include <cstring>

using namespace std;

int length(char* str);

int main(){
	char str0[100];
	
	cout << "문자열을 입력하십시오." << endl;
	cin.getline(str0, 100, '\n');
	
	cout << "문자열의 길이는 " << length(str0) << "입니다." << endl;
	
	return 0;
}

int length(char* str){
	return strlen(str);
}
