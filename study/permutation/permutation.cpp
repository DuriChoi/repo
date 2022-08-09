#include <iostream>
#include <vector>
#include <algorithm>
#include "permutation.h"

void permutation(vector<int> vect){
	int cnt = 0;

	sort(vect.begin(), vect.end());
	do{
		cnt++;	
		for(auto it : vect){
			cout << it << " ";
		}
		cout << endl;
	}while(next_permutation(vect.begin(), vect.end()));
	
	cout << "Total cnt: " << cnt << endl;
}
