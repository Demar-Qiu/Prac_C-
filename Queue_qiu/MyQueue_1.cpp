#include"MyQueue.h"

MyQueue::MyQueue(int queueCapacity)
{
	m_iQueueCapacity = queueCapacity;
	m_iHead = 0;
	m_iTail = 0;
	m_iQueueLen = 0;
	m_pQueue = new int[m_iQueueCapacity];//这里可能会申请内存失败还需进一步处理
}

MyQueue::~MyQueue()
{
	delete[]m_pQueue;
	m_pQueue = NULL;
 }

void MyQueue:: ClearQueue()  //元素都消失，内存都在，恢复到最初状态
{
	m_iHead = 0;
	m_iTail = 0;
	m_iQueueLen = 0;
}

bool MyQueue::QueueEmpty() const
{
	return m_iQueueLen == 0 ? true : false;
}

int MyQueue::QueueLength() const
{
	return m_iQueueLen;
}

bool MyQueue::QueueFull() const
{
	if (m_iQueueLen == m_iQueueCapacity)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool MyQueue::EnQueue(int element)   //入队函数
{
	if (QueueFull())
	{
		return false;
	}
	else
	{
		m_pQueue[m_iTail] = element; //元素插入当前队尾
		m_iTail++;        //队尾后移一个
		m_iTail = m_iTail % m_iQueueCapacity;  //环形 一个队列长度是一个循环
		m_iQueueLen++;    //队列长度加一
		return true;
	}
}

bool MyQueue::DeQueue(int &element) //出队函数,为了记录当前删除的元素所以用引用，
{
	if (QueueEmpty())
	{
		return false;
	}
	else
	{
		element = m_pQueue[m_iHead]; //将当前队头元素出队
		m_iHead++;      //队头后移
		m_iHead = m_iHead % m_iQueueCapacity;
		m_iQueueLen--;    //队列长度减一
		return true;
	}
}

void MyQueue::QueueTraverse()  //遍历操作 
{
	for (int i = m_iHead; i < m_iQueueLen+m_iHead; i++)  //因为队头和队尾都是动态的，所以要注意
	{
		cout << m_pQueue[i%m_iQueueCapacity] << endl;
	}

}