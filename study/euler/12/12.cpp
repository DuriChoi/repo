#include <iostream>
#include <climits>

using namespace std;

int main(){
	long int tri_num = 0;
	long int half_num = 0;	
	int cnt = 1;

	for(int i = 1; i < 10; i++){
		tri_num += i;
		half_num = tri_num / 2;
		printf("%ld: ", tri_num);
			for(int j = 1; j <= half_num; j++){
				if(tri_num % j == 0){
					printf("%d ", j);
					cnt++;	
				}
			}
		printf("%ld\n",tri_num);	
		printf("cnt: %d\n\n", cnt);	
		if(cnt > 500){
			printf("Congratulation!!\n");	
			printf("result: %ld\n", tri_num);
			break;
		}
		cnt = 1;	
	}
	return 0;

}
