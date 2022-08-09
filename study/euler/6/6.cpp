#include <iostream>

using namespace std;

int main(){
	int res_1 = 0, res_2  = 0;	
	
	for(int i = 1; i <= 100; i++){
		res_1 += i*i;
		res_2 += i;
	}
	res_2 *= res_2;
	cout << res_2 - res_1 << endl;
	return 0;
}
