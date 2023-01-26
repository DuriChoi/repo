#include <iostream>

using namespace std;

int main(){
	int a, b;

	while(1){
		cout << "please input 2 decimal\n";

		cin >> a;
		cin >> b;

		if(a > 0 && b > 0){
			if(a>b)
				cout << a <<" is bigger then " << b << endl;
			else if(a<b)
				cout << b <<" is bigger then " << a << endl;
			else
				cout <<"two input data are same\n";
		}else
			break;	
	}
	return 0;
}

	
