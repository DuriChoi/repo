#include "myTest.h"
#include <iostream>
#include <cstdio>
#include <pthread.h>
#include <unistd.h>
#include <cstring>

using namespace std;

static pthread_t pthA ;
static pthread_t pthB ;

static pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER; //뮤택스 생성 및 쓰레드 초기화

static int m_flagDestroy = 0 ;

static void* thFunc_A(void* arg) ;
static void* thFunc_B(void* arg) ;

static char* pBuf ;

void* thFunc_A(void* arg)
{
	while(1)
	{
		pthread_mutex_lock(&mutex);

		pBuf = new char[128] ;
		usleep(1) ;
		strcpy(pBuf, "1111111111111111111111111111111111111111111111111111111111111") ;
		delete[] pBuf ;
		
		printf("11\n") ;
		
		pthread_mutex_unlock(&mutex);


		if(m_flagDestroy)
			break ;

	}
	return NULL ;
}

void* thFunc_B(void* arg)
{
	while(1)
	{	
		pthread_mutex_lock(&mutex);
	
		pBuf = new char[128] ;
		usleep(1) ;
		strcpy(pBuf, "222222222222222222222222222222222222222222222222222222222222222") ;
		delete[] pBuf ;

		printf("\t22\n") ;

		pthread_mutex_unlock(&mutex);


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
