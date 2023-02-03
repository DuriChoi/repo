#include <iostream>
#include <vector>

using namespace std;

int main(){
	int num;
	vector<int> vt;

	cout << "몇 개의 정수 데이터를 입력하시겠습니까?" << endl;
	cin >> num;

	for(int i = 0; i < num; i++){
		int data;
		cout << "정수를 입력하십시오" << endl;
		cin >> data;
		vt.push_back(data);
	}

	cout << "표시합니다." << endl;
	vector<int>::iterator it = vt.begin();
	while(it != vt.end()){
		cout << *it;
		cout << "_";
		it++;
	}

	cout << "\n";
	return 0;
}
