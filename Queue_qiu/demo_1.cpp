#include<iostream>
#include"MyQueue.h"
using namespace std;

/* ʵ�ֻ��ζ��� */
/****************/

int main()
{
	MyQueue *p = new MyQueue(4);   //����4��Ԫ��

	p->EnQueue(10);  //����Ԫ��
	p->EnQueue(12);
	p->EnQueue(14); 
	p->EnQueue(16);
	p->QueueTraverse();   //��ʱ�Ѿ�����
	p->EnQueue(18);

	//if (p->QueueFull())
	//{
	//	cout << "����Ϊ��" << endl;
	//}

	int e = 0;
	p->DeQueue(e);
	cout << endl;
	cout << e << endl;  //����ɾ����Ԫ��(10)

	p->DeQueue(e);
	cout << endl;
	cout << e << endl;  //����ɾ����Ԫ��(12)

	cout << endl;
	p->QueueTraverse();  //ɾ��֮��

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