#include"MyQueue.h"
#include<iostream>
using namespace std;

MyQueue::MyQueue(int queueCapacity)  //�������
{
	m_iQueueCapacity = queueCapacity;
	m_iHead = 0;
	m_iTail = 0;
	m_iQueueLen = 0;
	m_pQueue = new Customer[m_iQueueCapacity];
}

MyQueue::~MyQueue()         //���ٶ���
{
	delete[] m_pQueue;
	m_pQueue = NULL;
}

void MyQueue::ClearQueue()         //����Ԫ��Ϊ0��ֻ�����ڴ棬���ָ������
{
	m_iHead = 0;
	m_iTail = 0;
	m_iQueueLen = 0;
}

bool MyQueue::QueueEmpty() const        //�пն���
{
	return m_iQueueLen == 0 ? true : false;
}

bool MyQueue::QueueFull() const         //��������
{
	return m_iQueueLen == m_iQueueCapacity ? true : false;
}


int MyQueue:: QueueLength()const    //���г���
{
	return m_iQueueLen;
}
bool MyQueue::EnQueue(Customer element)  //��Ԫ�����
{
	if (QueueFull())
	{
		return false;
	}
	else
	{
		m_pQueue[m_iTail] = element;
		m_iTail++;
		m_iTail = m_iTail % m_iQueueCapacity;
		m_iQueueLen++;
		return true;

	}
}
bool MyQueue::DeQueue(Customer& element) //��Ԫ�س���
{
	if (QueueEmpty())
	{
		return false;
	}
	else
	{
		element=m_pQueue[m_iHead];
		m_iHead++;
		m_iHead = m_iHead % m_iQueueCapacity;
		m_iQueueLen--;
		return true;

	}

}

void MyQueue::QueueTraverse()      //��������
{
	for (int i = m_iHead; i < m_iQueueLen + m_iHead; i++)
	{
		//cout << m_pQueue[i % m_iQueueCapacity] << endl;
		m_pQueue[i % m_iQueueCapacity].printInfo();
	}

}