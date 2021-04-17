#pragma once
#include<iostream>
using namespace std;

/* 环形队列的c++实现 */
/* 先进先出原则：出队---首元素先出；入栈---元素插入队尾  */

#include"Customer.h"

class MyQueue
{
public:
	MyQueue(int queueCapacity); //创建队列
	virtual~MyQueue();         //销毁队列
	void ClearQueue();         //清空队列
	bool QueueEmpty()const;         //判空队列
	bool QueueFull()const;          //判满队列
	int QueueLength()const;    //队列长度
	bool EnQueue(Customer element);  //新元素入队
	bool DeQueue(Customer& element); //首元素出队
	void QueueTraverse();      //遍历队列
private:
	Customer* m_pQueue;         //队列数组指针
	int m_iQueueLen;       //队列元素个数
	int m_iQueueCapacity;   //队列数组容量
	int m_iHead;          //队头
	int m_iTail;          //队尾
};