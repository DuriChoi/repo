#include <stdio.h>
//#pragma pack(1)
struct Size{
//	char c;
	long long lla;
	int b;
	char c;
} Size;
// __attribute__((packed)) Size;

int main(){
	printf("sizeof(int): %ld\n", sizeof(int));
	printf("sizeof(Size): %ld\n", sizeof(Size));
	return 0;
}
