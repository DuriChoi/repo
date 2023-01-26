#include <iostream>
#include <cstring>

using namespace std;

int count(char str[], char ch);

int main(){
	char str0[128] = "";
	char ch;
	int ch_cnt ;
	
	cout << "문자열을 입력하십시오." << endl;
	cin.getline(str0, 128, '\n'); 

	cout << "문자열에서 검색할 문자를 입력하십시오." << endl;
	cin >> ch;

	ch_cnt = count(str0, ch);
	
	cout << str0 << " 안에 " << ch << "은(는) 총 " << ch_cnt << "개 있습니다." << endl;

	return 0;
}

int count(char str[], char ch){
	int cnt = 0;
	int size_len = strlen(str);	
	
	for(int i = 0; i < size_len; i++){
		if(str[i] == ch)
			cnt++;
	}
	return cnt;
}
