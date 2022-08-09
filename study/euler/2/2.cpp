#include <iostream>
#define INT_MAX 4000000

using namespace std;

int fib(int);

int main(){
	int sum = 0;	
	int i = 1;	
	
	while(fib(i) <= INT_MAX){
		if(fib(i) % 2 == 0){
			sum += fib(i);
		}i++;
	}	
	
	cout << sum << endl;
	
	return 0;
}

int fib(int n){
	if(n==1)
		return 1;
	else if(n==2)
		return 2;
	else
		return fib(n-1) + fib(n-2);
}
