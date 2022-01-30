//#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include"MyQueue_C.h"


//using namespace std;


void InitQueue(MYQUEUE* q)
{
	q->cBase = (char*)malloc(sizeof(char) * MAXSIZE);
	if (NULL == q->cBase)
	{
		printf("memory allocation fail.\n");
		exit(-1);
	}
	q->front = 0;
	q->rear = 0;

}

void DestroyQueue(MYQUEUE* q)
{
	q->front = 0;
	q->rear = 0;
	free(q->cBase);
	q->cBase = NULL;
}

int QueueLength(MYQUEUE* q)
{
	return (q->rear - q->front + MAXSIZE) % MAXSIZE;
}
bool QueueEmpty(MYQUEUE* q)
{
	return q->front == q->rear ? true : false;
}
bool QueueFull(MYQUEUE* q)
{
	return q->front == (q->rear + 1) % MAXSIZE ? true : false;  // �ж��Ƿ���������ķ�������һ��Ԥ���ռ䲻�ã�c++��д�ķ���������һ������QueueLen��������¼�����е�ǰԪ�صĸ���
}

bool EnQueue(MYQUEUE* q, char ele)  //��β���
{
	if (QueueFull(q))
	{
		return false;
	}
	else
	{
		q->cBase[q->rear] = ele;
		q->rear = (q->rear + 1) % MAXSIZE;
		return true;
	}
}
bool DeQueue(MYQUEUE* q,char& ele)  //��ͷ����
{
	if (QueueEmpty(q))
	{
		return false;
	}
	else
	{
		ele=q->cBase[q->front];
		q->front = (q->front + 1) % MAXSIZE;
		return true;
	}
}

void QueueTraverse(MYQUEUE q)
{
	int i = 0;
	printf("Print the data: \n");
	for (i = q.front; i < q.front + QueueLength(&q); i++)
	{
		printf("%c ", q.cBase[i % MAXSIZE]);
	}
}