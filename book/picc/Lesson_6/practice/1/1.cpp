#include <iostream>
#include <math.h>

using namespace std;

int main(){
	cout << "1 ~ 10까지의 짝수를 출력합니다.\n";
	
	for(int i = 1; i <= 10; i++){
		if(fmod(i, 2) != 0)
			continue;
		else
			cout << i << endl;
	}

	return 0;
}
