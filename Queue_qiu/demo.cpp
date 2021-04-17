#include"MyQueue.h"
#include<iostream>
#include<stdlib.h>
using namespace std;

/* 关于环形队列的应用（队列中存放对象） */

int main()
{
	MyQueue *p = new MyQueue(4);

	//p->EnQueue(10);
	//p->EnQueue(12);
	//p->EnQueue(14);
	//p->EnQueue(16);
	////p->EnQueue(18);    //满了
	//p->QueueTraverse();

	//int e = 0;
	//p->DeQueue(e);
	//cout << endl; 
	//cout << e << endl;       //打印出队的元素

	//p->DeQueue(e);
	//cout << endl;
	//cout << e << endl;

	//cout << endl;
	//p->QueueTraverse();

	//p->ClearQueue();
	//p->QueueTraverse();


	Customer c1("zhangsan", 22);
	Customer c2("lisi", 25);
	Customer c3("wangwu", 14);

	p->EnQueue(c1);
	p->EnQueue(c2);
	p->EnQueue(c3);
	p->QueueTraverse();  //插入三个Customer对象

	Customer c4("", 0);
	p->DeQueue(c4);
	c4.printInfo();   //删除首元素的Customer对象
	p->QueueTraverse();  


	delete p;
	p = NULL;

	return 0;
}