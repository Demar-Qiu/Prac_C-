#include<iostream>
#include"stdlib.h"
#include"MyStack.h"
#include"Coordinate.h"
using namespace std;


/*   
  栈 类模板
  要求：掌握栈的实现原理和运行机制（LIFO后入先出原则）
        栈是限制插入和删除只能在一个位置上进行的表，该位置是表的末端，叫做栈的顶（top）
		注意和队列对比
  改进：定义Coordinate坐标类，改造栈类使其适用于坐标类
  目的：灵活理解抽象数据类型在栈中的应用

*/
/**********************************/

//这样可以换成各种类型的栈

int main()  
{ 
	MyStack<Coordinate> *pStack = new MyStack<Coordinate>(5);

	//cout << pStack->stackLength() << endl;
	
	pStack->push(Coordinate(1,2));
	pStack->push(Coordinate(3,4));


	pStack->stackTraverse(false);

	cout << pStack->stackLength() << endl;  //打印出当前栈中元素  
	//pStack->clearStack();

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