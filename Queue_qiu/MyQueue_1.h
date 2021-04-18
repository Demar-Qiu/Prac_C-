#pragma once
#include<stdio.h>
#include<iostream>
using namespace std;

/* 环形队列C++实现 */
/**
   * 队列是一种特殊的线性结构，它只允许在队列的首部（head）进行删除操作，称为“出队”
   * 而在队列尾部tail进行插入操作，称为“入队”。当队列中没有元素时（即head==tail），称为空队列,
   *“先进先出”（FirstIn First Out，FIFO）原则
**/

class MyQueue
{
public:
	MyQueue(int queueCapacity); //InitQueue(&Q)  创建队列
	virtual ~MyQueue();    //销毁队列
	void ClearQueue();     //清空队列
	bool QueueEmpty() const;    //判空函数
	bool QueueFull()const;     //判满函数
	int QueueLength() const;   //队列长度
	bool EnQueue(int element);  //新元素入队
	bool DeQueue(int &element);  //首元素出队
	void QueueTraverse();       //遍历队列
private:
	int *m_pQueue;  //队列数组指针
	int m_iQueueLen; //队列元素个数
	int m_iQueueCapacity;  //队列数组容量
	int m_iHead;    //队头
	int m_iTail;    //队尾
	
};

