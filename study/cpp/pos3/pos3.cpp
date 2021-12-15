#include <stdio.h>
//#include <cstring>
struct Position{
	int x;
	int y;
	char ch;
	void OutPosition();
};

void Position::OutPosition(){
	printf("x=%d, y=%d\n", x, y);
	printf("ch=%c\n",ch);
}

int main(){
	Position Here;
	Here.x = 30;
	Here.y = 10;
	Here.ch = 'A';
	Here.OutPosition();

	return 0;
}
