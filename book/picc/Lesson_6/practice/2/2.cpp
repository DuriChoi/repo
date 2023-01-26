#include <iostream>

using namespace std;

int main(){
	cout << "Please input your score. (exit: 0)\n";
	int a;
	int sum = 0;
	while(1){
		cin >> a;	
		if(a>1 && a<=100)
			sum+=a;
		else if(a == 0)
			break;
	}
	cout << "Sum of score is " << sum << endl;

	return 0;
}

