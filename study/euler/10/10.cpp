#include <iostream>
#include <climits>
using namespace std;
#define max 2000000

bool primeNum(int );

int main(){
	long int primeSum = 0;	
	for(int cnt = 1; cnt <= max; cnt++){
		if(primeNum(cnt)){
			//if(primeSum > INT_MAX - cnt){ //sum에 다음 숫자를 더했을 때 overflow 나면 break!!
			//	cout << primeSum << endl;	
			//	cout << "Overflow!!!!!!!!" << endl;
			///	break;	
		//	}else
				primeSum += cnt;
	//			cout << cnt << endl;
		}	
	}
	cout << primeSum << endl;

	return 0;
}

bool primeNum(int num){
	if(num < 2){
		return false;
	}

	for(int i = 2; i*i<=num; i++){
		if(num % i == 0)
			return false;
	}
	return true;
}
