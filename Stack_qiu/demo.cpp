#include<iostream>
#include"stdlib.h"
#include"MyStack.h"
using namespace std;


/*   
  ջ��
  Ҫ������ջ��ʵ��ԭ������л��ƣ�LIFO�����ȳ�ԭ��
        ջ�����Ʋ����ɾ��ֻ����һ��λ���Ͻ��еı���λ���Ǳ��ĩ�ˣ�����ջ�Ķ���top��
		ע��Ͷ��жԱ�

*/
/**********************************/


int main()
{
	MyStack *pStack = new MyStack(5);

	//cout << pStack->stackLength() << endl;
	
	pStack->push('d');
	pStack->push('e');
	pStack->push('m');
	pStack->push('a');
	pStack->push('r');

	pStack->stackTraverse(false);

	char ele = '0';
	pStack->pop(ele);
	cout << ele << endl;

	pStack->stackTraverse(false);

	cout << pStack->stackLength() << endl; //��ӡ����ǰջ��Ԫ��
	pStack->clearStack();

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