#include <iostream>
#define L_INT 600851475143

using namespace std;

int main(){
	long int a = L_INT;
	int *so = new int[10];

	int i = 2;
	int n = 0;	
	while(a != 1){
		if(a % i == 0){
			so[n] = i;
			a = a/i;
			n++;	
		}else
			i++;
	}
	
	cout << so[n-1] << endl;
	
	delete [] so;

	return 0;
}
