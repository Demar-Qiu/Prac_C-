#pragma once


class MyStack
{
public:
	MyStack(int size); //分配内存空间初始化栈空间，设定栈容量，栈顶
	~MyStack();      //回收栈空间内存
	bool stackEmpty();  //判定栈是否为空，为空返回true,非空返回false
	bool stackFull();   //判定栈是否已满。。。
	void clearStack();  //清空栈
	int stackLength();  //已有元素个数
	bool push(char elem);  //元素入栈，栈顶上升
	bool pop(char &elem);  //元素出栈，栈顶下降
	void stackTraverse(bool isFromButton);  //遍历栈中所有元素

private:
	char *m_pBuffer;  //栈空间指针
	int m_iSize;     //栈容量
	int m_iTop;      //栈顶（栈中有的元素个数）

};