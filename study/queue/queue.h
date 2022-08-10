#ifndef _QUEUE_H_
#define _QUEUE_H_
#include <mutex>
#include <list>
//#include <afxmt.h>
//#include <threadPoolLinux.h>

#define SIZE 128

struct MsgData
{
	unsigned short msgLv1;
	unsigned short msgLv2;
	unsigned short msgLv3;
	char ch ;
	char szData[SIZE] ;
	char* pData ;
	int  nInt;
	int  nInt2;
	int  nInt3;
	unsigned int  nUInt;
	void* pVoid ;
	void* pVoid2 ;
};


typedef std::list<MsgData>              ListMsg ;
typedef std::list<MsgData>::iterator    ListMsgIter ;

class CMsgQueue
{
public :
	static CMsgQueue* getInstance() ;

	int size() ;
//	int count() ;
	int push_back(MsgData* mData) ;
	int pop_front(MsgData* mData) ;


	// lock
//	int queueLock() ;
//	int queueUnlock() ;


private :
	ListMsg 	m_listMsg ;
	ListMsgIter 	m_listMsgIter ;

	std::mutex 		m_mutex ;

	CMsgQueue() ;
	~CMsgQueue() ;

public :

private :
	int m_flagMainStart ;


};


#endif
