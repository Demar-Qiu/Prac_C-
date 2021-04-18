#include<iostream>
#include"MyQueue.h"
using namespace std;

/* 实现环形队列 */
/****************/

int main()
{
	MyQueue *p = new MyQueue(4);   //容纳4个元素

	p->EnQueue(10);  //插入元素
	p->EnQueue(12);
	p->EnQueue(14); 
	p->EnQueue(16);
	p->QueueTraverse();   //此时已经满了
	p->EnQueue(18);

	//if (p->QueueFull())
	//{
	//	cout << "队列为满" << endl;
	//}

	int e = 0;
	p->DeQueue(e);
	cout << endl;
	cout << e << endl;  //看看删除的元素(10)

	p->DeQueue(e);
	cout << endl;
	cout << e << endl;  //看看删除的元素(12)

	cout << endl;
	p->QueueTraverse();  //删除之后

	p->ClearQueue();
	p->QueueTraverse();

	p->EnQueue(20);
	p->EnQueue(30);
	cout << endl;
	p->QueueTraverse();
	cout << p->QueueLength() << endl;

	delete p;
	p = NULL;

	return 0;
}