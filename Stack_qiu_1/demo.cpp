#include<iostream>
#include"stdlib.h"
#include"MyStack.h"
#include"Coordinate.h"
using namespace std;


/*   
  ջ ��ģ��
  Ҫ������ջ��ʵ��ԭ������л��ƣ�LIFO�����ȳ�ԭ��
        ջ�����Ʋ����ɾ��ֻ����һ��λ���Ͻ��еı���λ���Ǳ��ĩ�ˣ�����ջ�Ķ���top��
		ע��Ͷ��жԱ�
  �Ľ�������Coordinate�����࣬����ջ��ʹ��������������
  Ŀ�ģ��������������������ջ�е�Ӧ��

*/
/**********************************/

//�������Ի��ɸ������͵�ջ

int main()  
{ 
	MyStack<Coordinate> *pStack = new MyStack<Coordinate>(5);

	//cout << pStack->stackLength() << endl;
	
	pStack->push(Coordinate(1,2));
	pStack->push(Coordinate(3,4));


	pStack->stackTraverse(false);

	cout << pStack->stackLength() << endl;  //��ӡ����ǰջ��Ԫ��  
	//pStack->clearStack();

	if (pStack->stackEmpty())
	{
		cout << "ջΪ��" << endl;   
	}

	if (pStack->stackFull())
	{
		cout << "ջΪ��" << endl;

	}
	delete pStack;   
	pStack = NULL;   

	return 0;
}