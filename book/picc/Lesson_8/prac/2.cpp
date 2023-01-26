#include <iostream>

using namespace std;

void add(int* pX1, int* pX2, int* pA){
	int sum1;
	int sum2;

	sum1 = *pX1 + *pA;
	sum2 = *pX2 + *pA;
	
	cout << *pA << "점을 더했으므로" << endl;
	cout << "과목 1은 " << sum1 << "점이 되었습니다." << endl;
	cout << "과목 2은 " << sum2 << "점이 되었습니다." << endl;
}

int main(){
	int x1, x2, a;
	int * pX1, * pX2, * pA;	
	cout << "2 과목 분의 점수를 입력하십시오." << endl;
	cin >> x1 >> x2;

	cout << "더할 점수를 입력하십시오." << endl;
	cin >> a;
	
	pX1 = &x1;
	pX2 = &x2;
	pA = &a;
	
	add(pX1, pX2, pA);

	return 0;
}
