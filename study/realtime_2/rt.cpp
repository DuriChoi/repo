#include <iostream>
#include <sys/time.h>
#include <pthread.h>
#include <unistd.h>

using namespace std;

void *threadA(void *);
bool th_exit = true;
//int thread_rt = 0;
pthread_t tA;

int main(){
	pthread_create(&tA, NULL, threadA, NULL);
	pthread_join(tA, NULL);
	return 0;
}

void *threadA(void *arg){
	//	system("clear");	
	while(1){	
		timeval rt;	
		gettimeofday(&rt, NULL);
		tm *tm = localtime(&rt.tv_sec);
		cout << "현재시간: ";	
		cout << tm->tm_hour << "시 "; 
		cout << tm->tm_min << "분 ";
		cout << tm->tm_sec << "초 " << endl;
		//cout << rt.tv_usec/10000 << "밀리초" << endl; 
		usleep(1000000);	
	}
}
