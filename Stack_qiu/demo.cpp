#include<iostream>
#include"stdlib.h"
#include"MyStack.h"
using namespace std;


/*   
  栈类
  要求：掌握栈的实现原理和运行机制（LIFO后入先出原则）
        栈是限制插入和删除只能在一个位置上进行的表，该位置是表的末端，叫做栈的顶（top）
		注意和队列对比

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

	cout << pStack->stackLength() << endl; //打印出当前栈中元素
	pStack->clearStack();

	if (pStack->stackEmpty())
	{
		cout << "栈为空" << endl;
	}

	if (pStack->stackFull())
	{
		cout << "栈为满" << endl;
	}

	delete pStack;
	pStack = NULL;

	return 0;
}