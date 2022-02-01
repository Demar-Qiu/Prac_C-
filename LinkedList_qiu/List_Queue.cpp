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

//��β���
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
	if (q->front == NULL ) //������Ϊ��
	{
		q->front = node;
		q->rear = node;
	}
	//if (q->rear == NULL)
	//{
	//	q->front = node;
	//	q->rear = node;
	//}
	else     //��������Ϊ��
	{
		q->rear->next = node; //������½ڵ㵽ԭ��β
		q->rear = node;    //��βָ�����¸���node
	}

	return OK;
}

//��ͷ����
int DeQueue(Queue* q)
{
	eleType tem;
	if (QueueEmpty(q))
	{
		return ERROR;
	}
	QNode* node = (QNode*)malloc(sizeof(QNode));
	node=q->front;
	if (q->front == q->rear)  //����ֻ��һ��Ԫ�� ������ɾ��һ��֮��ź����ж�
	{
		q->front = NULL;
		q->rear = NULL;
	}
	else
	{
		q->front=q->front->next;
	}
	tem = node->data; //ȡ������ֵ
	free(node);       //�ͷŽڵ��ڴ�

	//if (q->front == NULL)//���ɾ��һ�����󣬶���Ϊ��
	//	q->rear == NULL;   //˵��ԭ�ȶ���ֻ��һ����������£�rearָ��ɾ���Ŀռ䣬ɾ��������Ҫ�ÿ�

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