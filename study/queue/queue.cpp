#include "queue.h"

#include <cstdio>
#include <cstring>

#define _HO     fprintf(stderr, "*** [Queue] %s() - (%d)\n", __FUNCTION__, __LINE__) ;

CMsgQueue* CMsgQueue::getInstance()
{
	static CMsgQueue instance ;
	return &instance ;
}

int CMsgQueue::size()
{
	int size ;
	m_mutex.lock() ;
        size = m_listMsg.size() ;
	m_mutex.unlock() ;

	return size ;
}

int CMsgQueue::push_back(MsgData* mData)
{
	m_mutex.lock() ;

	m_listMsg.push_back(*mData) ;

	m_mutex.unlock() ;

	return 1 ;
}

int CMsgQueue::pop_front(MsgData* mData)
{
	m_mutex.lock() ;

	m_listMsgIter = m_listMsg.begin() ;

//	m_mData = *m_listMsgIter ;
//      memcpy(mData, &m_mData, sizeof(msg_data)) ;
	memcpy(mData, &*m_listMsgIter, sizeof(MsgData)) ;

	m_listMsg.pop_front() ;
	
	m_mutex.unlock() ;
	return 1 ;
}


#if 0
int CMsgQueue::queueLock()
{
	m_mutex.lock() ;
	return 1 ;
}

int CMsgQueue::queueUnlock()
{
	m_mutex.unlock() ;
	return 1 ;
}
#endif

CMsgQueue::CMsgQueue()
{
	m_listMsg.clear() ;
}

CMsgQueue::~CMsgQueue()
{

}

