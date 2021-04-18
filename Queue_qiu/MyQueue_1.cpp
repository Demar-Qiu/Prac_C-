#include"MyQueue.h"

MyQueue::MyQueue(int queueCapacity)
{
	m_iQueueCapacity = queueCapacity;
	m_iHead = 0;
	m_iTail = 0;
	m_iQueueLen = 0;
	m_pQueue = new int[m_iQueueCapacity];//������ܻ������ڴ�ʧ�ܻ����һ������
}

MyQueue::~MyQueue()
{
	delete[]m_pQueue;
	m_pQueue = NULL;
 }

void MyQueue:: ClearQueue()  //Ԫ�ض���ʧ���ڴ涼�ڣ��ָ������״̬
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

bool MyQueue::EnQueue(int element)   //��Ӻ���
{
	if (QueueFull())
	{
		return false;
	}
	else
	{
		m_pQueue[m_iTail] = element; //Ԫ�ز��뵱ǰ��β
		m_iTail++;        //��β����һ��
		m_iTail = m_iTail % m_iQueueCapacity;  //���� һ�����г�����һ��ѭ��
		m_iQueueLen++;    //���г��ȼ�һ
		return true;
	}
}

bool MyQueue::DeQueue(int &element) //���Ӻ���,Ϊ�˼�¼��ǰɾ����Ԫ�����������ã�
{
	if (QueueEmpty())
	{
		return false;
	}
	else
	{
		element = m_pQueue[m_iHead]; //����ǰ��ͷԪ�س���
		m_iHead++;      //��ͷ����
		m_iHead = m_iHead % m_iQueueCapacity;
		m_iQueueLen--;    //���г��ȼ�һ
		return true;
	}
}

void MyQueue::QueueTraverse()  //�������� 
{
	for (int i = m_iHead; i < m_iQueueLen+m_iHead; i++)  //��Ϊ��ͷ�Ͷ�β���Ƕ�̬�ģ�����Ҫע��
	{
		cout << m_pQueue[i%m_iQueueCapacity] << endl;
	}

}