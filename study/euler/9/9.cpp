#include <iostream>
#include <math.h>
using namespace std;

void pita_Func(int c);

static int c = 0;

int main(){
	for(c = 1; c<=500; c++){
		pita_Func(c);
	}

	return 0;
}

void pita_Func(int c){
	for(int a = 3; a<500; a++){
		for(int b = 4; b<500; b++){
			if(pow(c,2) == pow(a,2) + pow(b,2) && a+b+c == 1000 && a<b){
				cout << "a: " << a << endl;	
				cout << "b: " << b << endl;	
				cout << "c: " << c << endl;	
				cout << "a * b * c = " << a*b*c << endl;	
			}
		}
	}
}
