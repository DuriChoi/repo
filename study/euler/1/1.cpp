#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> mtp_3;
	vector<int> mtp_5;

	int sum_3 = 0;
	int sum_5 = 0;
	int total = 0;
	int prt_c = 0;
	int prt_c2 = 0;
	for(int i=0;i<1000;i++){
		if(i % 3 == 0)
			mtp_3.push_back(i);
		else if(i % 5 == 0)
			mtp_5.push_back(i);
		else
			continue;
	}
	
	cout <<"3의 배수" << endl;	
	for(auto j : mtp_3){
		cout << j << " ";
		sum_3 = sum_3 + j;	
		prt_c++;
		if(prt_c % 5 == 0)
			cout << endl;
	}
	cout << endl;
	cout << endl;

	cout <<"5의 배수(3의 배수와 공배수는 제외)" << endl;	
	for(auto k : mtp_5){
		cout << k << " ";
		sum_5 = sum_5 + k;	
		prt_c2++;	
		if(prt_c2 % 5 == 0)
			cout << endl;
	}
	cout << endl;
	cout << endl;
	
	total = sum_3 + sum_5;
	cout << "1000미만 3의 배수 + 5의 배수는?" << endl;
	cout << total << endl;

	return 0;
}
