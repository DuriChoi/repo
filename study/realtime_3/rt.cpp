#include <iostream>
#include <sys/time.h>
#include <pthread.h>
#include <unistd.h>

using namespace std;

void *threadA(void *);
void ClearBuffer(void );

bool th_exit = true;
pthread_t tA;

int main(){
	int a = 0;	
	pthread_create(&tA, NULL, threadA, NULL);
	while(1){
		a = getchar();
		if(a == 113){
			cout << "time thread 종료" << endl;	
			pthread_cancel(tA);
			break;
		}else{
			cout << "종료하려면 'q+Enter'를 누르세요" << endl;
		}	
		ClearBuffer();	
	}
	
	pthread_join(tA, NULL);
	
	cout << "Main 종료" << endl;	
	
	return 0;
}

void *threadA(void *arg){
	while(1){	
		//system("clear");	
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

void ClearBuffer(void ){
	while(getchar() != '\n');
}
