#include <iostream>

using namespace std;

bool primeNum(int );

int main(){
	int cnt = 0;	
	for(int i=0; i<9999999; i++){
		if(primeNum(i)){
			if(cnt == 10){
				cout << i << endl;	
				break;	
			}
		}
		cnt++;	
	}
	return 0;
}

bool primeNum(int num){
	if(num < 2)
		return false;
	
	for(int i=2; i*i<=num; i++){
		if(num % i == 0)
			return false;
	}
	return true;
}
