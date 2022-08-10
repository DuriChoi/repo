#include "myTest.h"
#include <iostream>
#include <cstdio>
#include <pthread.h>
#include <unistd.h>

using namespace std;

static pthread_t pthA ;
static pthread_t pthB ;

static pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER; //뮤택스 생성 및 쓰레드 초기화

static int m_flagDestroy = 0 ;

static void* thFunc_A(void* arg) ;
static void* thFunc_B(void* arg) ;

void* thFunc_A(void* arg)
{
	while(1)
	{
		cout << "Before A lock: A lock 진입 전" << endl;	
		pthread_mutex_lock(&mutex); //lock 
		cout << "After A lock: A lock 완료 - B 스레드 실행 불가" << endl;	

		printf("1\n") ;
		printf("2\n") ;

		cout << "Before A UN-lock: A UN-lock 진입 전" << endl;	
		pthread_mutex_unlock(&mutex); //unlock
		cout << "After A UN-lock: A UN-lock 완료: B 스레드 실행 가능" << endl;	

		if(m_flagDestroy)
			break ;

		printf("Before A Sleep: A sleep 진입 전\n") ;
		sleep(1) ;
		printf("After A Sleep: A sleep 완료 - A 스레드 1초동안 스케줄링 불가, B 스레드에 권한 넘겨줌\n") ;

	}
	printf("Bye~ thFunc_A()\n") ;
	return NULL ;
}

void* thFunc_B(void* arg)
{
	while(1)
	{	
		cout << "\t\t\t\t\t Before B lock: B lock 진입 전" << endl;	
		pthread_mutex_lock(&mutex); //lock	
		cout << "\t\t\t\t\t After B lock: B lock 완료 - A 스레드 실행 불가" << endl;	
	
		printf("\t\t\t\t\t 5\n") ;
		printf("\t\t\t\t\t 6\n") ;
	
		printf("\t\t\t\t\t After B lock Before B Sleep: B lock 후 sleep 진입 전\n") ;
		sleep(1) ;
		printf("\t\t\t\t\t B Sleep after B locked: B lock 완료 후 B sleep 완료 - B 스레드 1초동안 스케줄링 불가, B 스레드에 권한 넘겨줌\n") ;


		cout << "\t\t\t\t\t Before B UN-Lock: B UN-lock 진입 전" << endl;	
		pthread_mutex_unlock(&mutex); //unlock
		cout << "\t\t\t\t\t After B UN-Lock: B UN-lock 완료: A 스레드 실행 가능" << endl;	

//		printf("\t\t\t\t\t Before B Sleep: B sleep 진입 전\n") ;
//		sleep(1) ;
//		printf("\t\t\t\t\t After B Sleep: B sleep 완료 - B 스레드 1초동안 스케줄링 불가, A 스레드에 권한 넘겨줌\n") ;


		if(m_flagDestroy)
			break ;
		
	}
	printf("Bye~ thFunc_B()\n") ;
	return NULL ;
}

int MyTest_init()
{
	pthread_create(&pthA, NULL, thFunc_A, NULL) ;
	sleep(1);	
	pthread_create(&pthB, NULL, thFunc_B, NULL) ;
	return 1 ;
}

int MyTest_destroy()
{
	m_flagDestroy = 1 ;

	pthread_join(pthA, NULL) ;
	printf("After pthread_join() - A\n") ;
	pthread_join(pthB, NULL) ;
	printf("After pthread_join() - B\n") ;

	pthread_mutex_destroy(&mutex); //mutex 파괴 동적일때만 필요
	
	return 1 ;
}
