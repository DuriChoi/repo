#include <iostream>

using namespace std;

int main(){
	int* pA;
	pA = new int;

	cout << "동적 메모리 확보" << endl;

	*pA = 10;

	cout << "동적으로 확보한 메모리 사용하여 " << *pA << "을 출력했습니다." << endl;

	delete pA;

	cout << "메모리 해제" << endl;

	return 0;
}
