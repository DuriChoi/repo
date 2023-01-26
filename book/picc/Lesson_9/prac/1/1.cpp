#include <iostream>

using namespace std;

int max(int x[]);

int main(){
	int point[10];

	cout << "시험 점수를 입력하십시오." << endl;

	for(int i = 0; i < 5; i++){
		cin >> point[i];
	}
	
	cout << "가장 높은 점수는 " << max(point) << "점입니다." << endl;	
	return 0;
}

int max(int x[]){
	int tmp;
	tmp = 0;

	for(int j=0; j<5; j++){
		if(tmp < x[j])
			tmp = x[j];
	}	
		return tmp;

}
	
