#include <iostream>

using namespace std;

void add(int &rX1, int &rX2, int &rA){
	int sum1;
	int sum2;

	sum1 = rX1 + rA;
	sum2 = rX2 + rA;
	
	cout << rA << "점을 더했으므로" << endl;
	cout << "과목 1은 " << sum1 << "점이 되었습니다." << endl;
	cout << "과목 2은 " << sum2 << "점이 되었습니다." << endl;
}

int main(){
	int x1, x2, a;
	cout << "2 과목 분의 점수를 입력하십시오." << endl;
	cin >> x1 >> x2;

	cout << "더할 점수를 입력하십시오." << endl;
	cin >> a;
	
	int &rX1 = x1;
	int &rX2 = x2;
	int &rA = a;
	

	add(rX1, rX2, rA);

	return 0;
}
