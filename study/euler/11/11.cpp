#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(){
	long int h_temp = 1;
	long int h_max = 1;
	long int v_temp = 1;
	long int v_max = 1;
	long int d_temp = 1;
	long int d_max = 1;
	long int rd_temp = 1;
	long int rd_max = 1;
	long int result = 1;
	string num = "08 02 22 97 38 15 00 40 00 75 04 05 07 78 52 12 50 77 91 08";
	num = num.append(" 49 49 99 40 17 81 18 57 60 87 17 40 98 43 69 48 04 56 62 00");
	num = num.append(" 81 49 31 73 55 79 14 29 93 71 40 67 53 88 30 03 49 13 36 65");
	num = num.append(" 52 70 95 23 04 60 11 42 69 24 68 56 01 32 56 71 37 02 36 91");
	num = num.append(" 22 31 16 71 51 67 63 89 41 92 36 54 22 40 40 28 66 33 13 80");
	num = num.append(" 24 47 32 60 99 03 45 02 44 75 33 53 78 36 84 20 35 17 12 50");
	num = num.append(" 32 98 81 28 64 23 67 10 26 38 40 67 59 54 70 66 18 38 64 70");
	num = num.append(" 67 26 20 68 02 62 12 20 95 63 94 39 63 08 40 91 66 49 94 21");
	num = num.append(" 24 55 58 05 66 73 99 26 97 17 78 78 96 83 14 88 34 89 63 72");
	num = num.append(" 21 36 23 09 75 00 76 44 20 45 35 14 00 61 33 97 34 31 33 95");
	num = num.append(" 78 17 53 28 22 75 31 67 15 94 03 80 04 62 16 14 09 53 56 92");
	num = num.append(" 16 39 05 42 96 35 31 47 55 58 88 24 00 17 54 24 36 29 85 57");
	num = num.append(" 86 56 00 48 35 71 89 07 05 44 44 37 44 60 21 58 51 54 17 58");
	num = num.append(" 19 80 81 68 05 94 47 69 28 73 92 13 86 52 17 77 04 89 55 40");
	num = num.append(" 04 52 08 83 97 35 99 16 07 97 57 32 16 26 26 79 33 27 98 66");
	num = num.append(" 88 36 68 87 57 62 20 72 03 46 33 67 46 55 12 32 63 93 53 69");
	num = num.append(" 04 42 16 73 38 25 39 11 24 94 72 18 08 46 29 32 40 62 76 36");
	num = num.append(" 20 69 36 41 72 30 23 88 34 62 99 69 82 67 59 85 74 04 36 16");
	num = num.append(" 20 73 35 29 78 31 90 01 74 31 49 71 48 86 81 16 23 57 05 54");
	num = num.append(" 01 70 54 71 83 51 54 69 16 92 33 48 61 43 52 01 89 19 67 48");

	int a[20][20] = {}; 
	int cnt = 0;	
	for(int i = 0; i < 20; i++){
		for(int j = 0; j < 20; j++){
			a[i][j] = stoi(num.substr(cnt, 2));
			cnt+=3;
		}
	}
//	printf("Horizon\n");
	for(int i = 0; i < 20; i++){
		for(int j = 0; j < 17; j++){
			h_temp = a[i][j] * a[i][j+1] * a[i][j+2] * a[i][j+3] ; 	
			if(h_max < h_temp){
				h_max = h_temp;
			}
		}
	}
//	printf("Vertical\n");
	for(int i = 0; i < 20; i++){
		for(int j = 0; j < 17; j++){
			v_temp = a[j][i] * a[j+1][i] * a[j+2][i] * a[j+3][i] ; 
			if(v_max < v_temp){
				v_max = v_temp;
			}
		}
	}
//	printf("Diagonal\n");
	for(int i = 0; i < 17; i++){
		for(int j = 0; j < 17; j++){
			d_temp = a[j][i] * a[j+1][i+1] * a[j+2][i+2] * a[j+3][i+3] ; 
			if(d_max < d_temp){
				d_max = d_temp;
			}
		}
	}
//	printf("Reverse Diagonal\n");
	for(int i = 19; i > 2; i--){
		for(int j = 0; j < 17; j++){
			rd_temp = a[i][j] * a[i-1][j+1] * a[i-2][j+2] * a[i-3][j+3] ; 
			if(rd_max < rd_temp){
				rd_max = rd_temp;
			}
		}
	}
	cout << "Horizon_Max: ";
	cout << h_max << endl;
	cout << "Vertical_Max: ";
	cout << v_max << endl;
	cout << "Diagonal_Max: ";
	cout << d_max << endl;
	cout << "Reverse Diagonal_Max: ";
	cout << rd_max << endl;

	cout << "Result: ";
	if(result < h_max)
		result = h_max;
	if(result < v_max)
		result = v_max;
	if(result < d_max)
		result = d_max;
	if(result < rd_max)
		result = rd_max;
	
	cout << result << endl;
	
	return 0;
}
