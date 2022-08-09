#include <iostream>

using namespace std;

int main(){
	int num = 1;
	int max = 20;
	bool b = true;
	do{
		for(int i = 1; i <= max; i++){
			if(num % i == 0){
				if(max == i)
					b = false;
				else
					continue;
			}else{
				num++;
				break;
			}
		}
	}while(b);
	cout << num << endl;
	return 0;
}
