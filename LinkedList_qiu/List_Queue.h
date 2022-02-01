//#pragma once
#ifndef LIST_QUEUE_H_
#define LIST_QUEUE_H_

/** C语言链表实现---链式队列 **/
// 注意：该种队列无队满情况
/**

	入队出队复杂度都是O(1)  同数组实现的循环队列

**/


#define ERROR -1
#define OK    1
typedef char eleType;

typedef	struct node
{
	eleType data;
	struct node* next;  //必须这样

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

