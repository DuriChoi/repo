#include <iostream>
#include <sys/time.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/select.h>
#include <termios.h>
#include <fcntl.h>

using namespace std;

void *threadA(void *);

int linux_kbhit(void);
int linux_getch(void);

int a = 0;

pthread_t tA;

int main(){
	pthread_create(&tA, NULL, threadA, NULL);
	pthread_join(tA, NULL);

	return 0;
}

void *threadA(void *arg){
	a=0;	
	system("clear");	
	while(1){	
		a = linux_kbhit();	
		if(a == 1){
			cout << a;	
			exit(1);
		}else{
			timeval rt;	
			gettimeofday(&rt, NULL);
			tm *tm = localtime(&rt.tv_sec);
			cout << "현재시간: ";	
			cout << tm->tm_hour << "시 "; 
			cout << tm->tm_min << "분 ";
			cout << tm->tm_sec << "초 " << endl;
			//cout << rt.tv_usec/10000 << "밀리초" << endl; 
			sleep(1);	
		}	
	}
}

int linux_kbhit(void){
	struct termios oldt, newt;
	int ch;
	int oldf;
	tcgetattr(STDIN_FILENO, &oldt);
	newt = oldt;
	newt.c_lflag &= ~(ICANON | ECHO);
	tcsetattr(STDIN_FILENO, TCSANOW, &newt);
	oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
	fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

	ch = getchar();
	tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
	fcntl(STDIN_FILENO, F_SETFL, oldf);
	if(ch != EOF){
		ungetc(ch, stdin);
		return 1;
	}
	return 0;
}
