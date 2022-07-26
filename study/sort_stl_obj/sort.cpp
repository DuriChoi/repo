#include <iostream>
#include "sort.h"
#include <set>

using namespace std;
set<int> s;

extern "C"{
	void sort(int x[], int size){
		for(int i=0; i<size; i++){
			s.insert(x[i]);
		}
		set<int>::iterator iter;
		for(iter = s.begin(); iter != s.end(); iter++){
			cout << *iter << " ";
		}
		cout << endl;
		
		set<int>::reverse_iterator r_iter;
		for(r_iter = s.rbegin(); r_iter != s.rend(); r_iter++){
			cout << *r_iter << " ";
		}
		cout << endl;
	}
}
