#include <iostream>

using namespace std;

int main(){
	int* pA;
	pA = new int;
	*pA = 10;
	
	cout << *pA << endl;
	delete pA;
	cout << *pA << endl;

	return 0;
}
