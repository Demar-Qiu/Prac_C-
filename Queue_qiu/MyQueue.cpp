#include"MyQueue.h"
#include<iostream>
using namespace std;

MyQueue::MyQueue(int queueCapacity)  //构造队列
{
	m_iQueueCapacity = queueCapacity;
	m_iHead = 0;
	m_iTail = 0;
	m_iQueueLen = 0;
	m_pQueue = new Customer[m_iQueueCapacity];
}

MyQueue::~MyQueue()         //销毁队列
{
	delete[] m_pQueue;
	m_pQueue = NULL;
}

void MyQueue::ClearQueue()         //队列元素为0，只是有内存，即恢复到最初
{
	m_iHead = 0;
	m_iTail = 0;
	m_iQueueLen = 0;
}

bool MyQueue::QueueEmpty() const        //判空队列
{
	return m_iQueueLen == 0 ? true : false;
}

bool MyQueue::QueueFull() const         //判满队列
{
	return m_iQueueLen == m_iQueueCapacity ? true : false;
}


int MyQueue:: QueueLength()const    //队列长度
{
	return m_iQueueLen;
}
bool MyQueue::EnQueue(Customer element)  //新元素入队
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
bool MyQueue::DeQueue(Customer& element) //首元素出队
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

void MyQueue::QueueTraverse()      //遍历队列
{
	for (int i = m_iHead; i < m_iQueueLen + m_iHead; i++)
	{
		//cout << m_pQueue[i % m_iQueueCapacity] << endl;
		m_pQueue[i % m_iQueueCapacity].printInfo();
	}

}