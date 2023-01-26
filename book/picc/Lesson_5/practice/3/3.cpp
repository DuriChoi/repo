#include <iostream>

using namespace std;

int main(){
	int a;

	while(1){
		cout << "성적을 입력하세요(1~5 사이):";
		cin >> a;
		if(a>0 && a<6){
			if(a==1)
				cout << "성적은 " << a << "입니다. 노력합시다.\n";
			if(a==2)
				cout << "성적은 " << a << "입니다. 조금 더 노력합시다.\n";
			if(a==3)
				cout << "성적은 " << a << "입니다. 더 높은 점수를 목표로 합시다.\n";
			if(a==4)
				cout << "성적은 " << a << "입니다. 매우 잘했습니다.\n";
			if(a==5)
				cout << "성적은 " << a << "입니다. 매우 우수합니다.\n";
		}
		else 
			break;
	}
	return 0;
}
