//#pragma once
#ifndef MYQUEUE_C_H_
#define MYQUEUE_C_H_

/**
* 
	C语言下实现环形队列

**/
#define MAXSIZE 10

typedef struct queue
{
	char* cBase;
	int front;
	int rear;

}MYQUEUE;

void InitQueue(MYQUEUE* q);

void DestroyQueue(MYQUEUE* q);

int QueueLength(MYQUEUE* q);

bool QueueEmpty(MYQUEUE* q);

bool QueueFull(MYQUEUE* q);

bool EnQueue(MYQUEUE* q, char ele);

bool DeQueue(MYQUEUE* q,char&ele);

void QueueTraverse(MYQUEUE q);


#endif

