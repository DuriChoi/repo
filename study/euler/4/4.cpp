#include <iostream>
using namespace std;

int main(){
	int mul = 0;		
	int cnt = 0;	
	int tmp = 10000;
	
	for(int i = 999; i >= 100; i--){
		cnt = 0;	
		for(int j = 999; j >= 100; j--){
			cnt = 0;	
			mul = i*j;
			string str = to_string(mul);
			for(int a = 0; a < 3; a++){
				if(str[a] == str[5-a]){
					cnt++;
				}
				if(cnt == 3){
					if(tmp < i*j)
						tmp = i*j;
				}	
			}
		}
	}

	cout << tmp << endl;	
	return 0;
}

