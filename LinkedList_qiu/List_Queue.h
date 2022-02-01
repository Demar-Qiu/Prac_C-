//#pragma once
#ifndef LIST_QUEUE_H_
#define LIST_QUEUE_H_

/** C��������ʵ��---��ʽ���� **/
// ע�⣺���ֶ����޶������
/**

	��ӳ��Ӹ��Ӷȶ���O(1)  ͬ����ʵ�ֵ�ѭ������

**/


#define ERROR -1
#define OK    1
typedef char eleType;

typedef	struct node
{
	eleType data;
	struct node* next;  //��������

}QNode;

typedef struct queue
{
	QNode* front;
	QNode* rear;

}Queue;

Queue* InitQueue();

bool QueueEmpty(Queue* q);

int EnQueue(Queue* q, eleType e);

int DeQueue(Queue* q);

void PrintQueue(Queue* q);

#endif 

