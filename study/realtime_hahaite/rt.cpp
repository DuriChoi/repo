#include <iostream>
#include <sys/time.h>
#include <pthread.h>
#include <unistd.h>
#include <cstdio>

using namespace std;

void *threadA(void *);

bool th_exit = true;
pthread_t tA;
int flagDestroy = 0;

int main(){
	const char* pStr;
	char szText[128];

	pthread_create(&tA, NULL, threadA, NULL);
	while(1){
		pStr = fgets(szText, 128, stdin);
		if(*pStr == 'q'){
			flagDestroy = 1;
			break;
		}
		cout << "종료하려면 'q+enter'를 누르세요" << endl;
	}

	cout << "Before pthread_join()" << endl;
	pthread_join(tA, NULL);
	cout << "After pthread_join()" << endl;
	cout << "Main 종료" << endl;

	return 0;
}

void* threadA(void *arg){
	timeval tv;
	tm* pNow;
	while(1){
		gettimeofday(&tv, NULL);
		pNow = localtime(&tv.tv_sec);
		printf("Current time : %02d : %02d : %02d\n", pNow->tm_hour, pNow->tm_min, pNow->tm_sec);
		sleep(1);

		if(flagDestroy)
			break;
	}

	cout << "Bye~ threadA()" << endl;
	return NULL;
}
