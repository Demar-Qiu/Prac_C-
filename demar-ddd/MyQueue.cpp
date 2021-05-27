#include"MyQueue.h"
#include<iostream>
using namespace std;


MyQueue::MyQueue(int queueCapacity)
{
	m_iQueueCapacity = queueCapacity;
	m_iHead = 0;
	m_iTail = 0;
	m_iQueueLength = 0;
	m_pQueue = new Customer[m_iQueueCapacity];
}


MyQueue:: ~MyQueue()
{
	delete[] m_pQueue;
	m_pQueue = NULL;
}

void MyQueue::ClearQueue()
{
	m_iHead = 0;
	m_iTail = 0;
	m_iQueueLength = 0;
}

bool MyQueue::QueueEmpty() const
{
	return m_iQueueLength == 0 ? true : false;
}

bool MyQueue::QueueFull() const         //ÅÐÂú¶ÓÁÐ
{
	return m_iQueueLength == m_iQueueCapacity ? true : false;
}

int MyQueue::QueueLength() const
{
	return m_iQueueLength;
}

bool MyQueue::EnQueue(Customer element)
{
	if (QueueFull())
	{
		return false;
	}
	else
	{
		m_pQueue[m_iTail] = element;
		m_iTail++;
		m_iTail = m_iTail % m_iQueueCapacity;   //¹Ø¼ü£¡£¡£¡
		m_iQueueLength++; 
		return true;
	}
}

bool MyQueue::DeQueue(Customer& element)
{
	if (QueueEmpty())
	{
		return false;
	}
	else
	{
		element = m_pQueue[m_iHead];
		m_iHead++;
		m_iHead = m_iHead % m_iQueueCapacity;
		m_iQueueLength--;
		return true;
	}
}


void MyQueue::QueueTraverse()
{
	for (int i = m_iHead; i < m_iHead + m_iQueueLength; i++)
	{
		m_pQueue[i % m_iQueueCapacity].printInfo();
	}
}











