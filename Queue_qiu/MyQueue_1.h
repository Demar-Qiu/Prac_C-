#pragma once
#include<stdio.h>
#include<iostream>
using namespace std;

/* ���ζ���C++ʵ�� */
/**
   * ������һ����������Խṹ����ֻ�����ڶ��е��ײ���head������ɾ����������Ϊ�����ӡ�
   * ���ڶ���β��tail���в����������Ϊ����ӡ�����������û��Ԫ��ʱ����head==tail������Ϊ�ն���,
   *���Ƚ��ȳ�����FirstIn First Out��FIFO��ԭ��
**/

class MyQueue
{
public:
	MyQueue(int queueCapacity); //InitQueue(&Q)  ��������
	virtual ~MyQueue();    //���ٶ���
	void ClearQueue();     //��ն���
	bool QueueEmpty() const;    //�пպ���
	bool QueueFull()const;     //��������
	int QueueLength() const;   //���г���
	bool EnQueue(int element);  //��Ԫ�����
	bool DeQueue(int &element);  //��Ԫ�س���
	void QueueTraverse();       //��������
private:
	int *m_pQueue;  //��������ָ��
	int m_iQueueLen; //����Ԫ�ظ���
	int m_iQueueCapacity;  //������������
	int m_iHead;    //��ͷ
	int m_iTail;    //��β
	
};

