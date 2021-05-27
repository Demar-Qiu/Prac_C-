#pragma once
#include"Customer.h"

/* 环形队列 */

class MyQueue
{
public:
	MyQueue(int queueCapacity);
	virtual ~MyQueue();
	void ClearQueue();
	bool QueueEmpty() const;
	bool QueueFull() const;
	bool QueueLength() const;
	bool EnQueue(Customer element);
	bool DeQueue(Customer& element);
	void QueueTraverse(); 

private:
	Customer* m_pQueue;
	int m_iQueueCapacity;
	int m_iQueueLength;
	int m_iHead;
	int m_iTail;


};