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
		cout << "***Before A sleep***" << endl;	
		sleep(1);	
		cout << "***After A sleep***" << endl;	

		cout << "1. Ready for thFunc_A lock" << endl;	
		pthread_mutex_lock(&mutex); //lock 
		cout << "2. Succeed to thFunc_A locked" << endl;	

//		usleep(500000);	//출력 전 0.5초 delay
		printf("1\n") ;
//		usleep(400000) ;
		printf("2\n") ;
	
		cout << "3. Ready for thFunc_A unlock" << endl;	
		pthread_mutex_unlock(&mutex); //unlock
		cout << "4. Succeed to thFunc_A unlocked" << endl;	
		
//		cout << "***Before A sleep***" << endl;	
//		sleep(1);//권한 넘김, 지우면 1, 2 만 출력	
//		cout << "***After A sleep***" << endl;	
	
		if(m_flagDestroy)
			break ;

	}
	printf("Bye~ thFunc_A()\n") ;
	return NULL ;
}

void* thFunc_B(void* arg)
{
	while(1)
	{	
//		cout << "\t\t\t\t\t ***Before B sleep***" << endl;	
//		sleep(1);// 권한 넘김, 없어도 정상 출력	
//		cout << "\t\t\t\t\t ***After B sleep***" << endl;	

		cout << "\t\t\t\t\t 5. Ready for thFunc_B lock" << endl;	
		pthread_mutex_lock(&mutex); //lock	
		cout << "\t\t\t\t\t 6. Succeed to thFunc_B locked" << endl;	
	
//		usleep(500000);//출력 전 0.5초 delay	
		printf("\t\t\t\t\t 5\n") ;
//		usleep(700000) ;
		printf("\t\t\t\t\t 6\n") ;

		cout << "\t\t\t\t\t 7. Ready for thFunc_B unlock" << endl;	
		pthread_mutex_unlock(&mutex); //unlock
		cout << "\t\t\t\t\t 8. Succeed thFunc_B unlocked" << endl;	
	
		cout << "\t\t\t\t\t ***Before B sleep***" << endl;	
		sleep(1);	
		cout << "\t\t\t\t\t ***After B sleep***" << endl;	
		
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

	//pthread_mutex_destroy(&mutex); //mutex 파괴 동적일때만 필요
	
	return 1 ;
}
