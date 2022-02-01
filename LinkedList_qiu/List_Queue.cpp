#include<stdio.h>
#include<stdlib.h>;
#include"List_Queue.h"



Queue* InitQueue()
{
	Queue* q = (Queue*)malloc(sizeof(Queue));
	if (!q)
	{
		printf("memory allocation fail.\n");
		exit(ERROR);
	}
	q->front = q->rear = NULL;
	return q;
	
}

bool QueueEmpty(Queue* q)
{
	if (q->front == NULL)
	{
		return true;
	}
	return false;

}

//队尾入队
int EnQueue(Queue* q, eleType e)  
{
	if (q == NULL)
		return ERROR;
	QNode* node = (QNode*)malloc(sizeof(QNode));
	if (!node)
	{
		return ERROR;
	}
	node->data = e;
	node->next = NULL;
	if (q->front == NULL ) //队列若为空
	{
		q->front = node;
		q->rear = node;
	}
	//if (q->rear == NULL)
	//{
	//	q->front = node;
	//	q->rear = node;
	//}
	else     //队列若不为空
	{
		q->rear->next = node; //加入的新节点到原队尾
		q->rear = node;    //队尾指针重新赋给node
	}

	return OK;
}

//队头出队
int DeQueue(Queue* q)
{
	eleType tem;
	if (QueueEmpty(q))
	{
		return ERROR;
	}
	QNode* node = (QNode*)malloc(sizeof(QNode));
	node=q->front;
	if (q->front == q->rear)  //队列只有一个元素 ，或者删除一个之后放后面判断
	{
		q->front = NULL;
		q->rear = NULL;
	}
	else
	{
		q->front=q->front->next;
	}
	tem = node->data; //取出数据值
	free(node);       //释放节点内存

	//if (q->front == NULL)//如果删除一个结点后，队列为空
	//	q->rear == NULL;   //说明原先队列只有一个结点的情况下，rear指向被删结点的空间，删除结点后需要置空

	return OK;
}

void PrintQueue(Queue* q)
{
	if (QueueEmpty(q))
	{
		printf("Queue is Empty!\n");
	}
	QNode* node = (QNode*)malloc(sizeof(QNode));
	node = q->front;
	while (node)
	{
		printf("%c ", node->data);
		node = node->next;
	}
	printf("\n");

}