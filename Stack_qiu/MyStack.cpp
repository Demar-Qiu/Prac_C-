#include"MyStack.h"
#include<iostream>
using namespace std;


MyStack::MyStack(int size)  //构造函数
{ 
	m_iSize = size;
	m_pBuffer = new char[m_iSize];
	m_iTop = 0;   //空栈
}

MyStack::~MyStack()    //析构函数
{
	delete[]m_pBuffer;
	m_pBuffer = NULL;
}

bool MyStack::stackEmpty()   //判空函数
{
	return 0 == m_iTop ? true : false;
}

bool MyStack::stackFull()  //判满函数
{
	return m_iSize == m_iTop ? true : false;
}

void MyStack::clearStack()   //清除函数
{
	m_iTop = 0;
}

int MyStack::stackLength()
{
	return m_iTop;
}

bool MyStack::push(char elem) //入栈函数 （放入栈顶） ,也可以bool返回类型
{
	if (!stackFull())
	{
		m_pBuffer[m_iTop] = elem;
		m_iTop++;
		return true;
	}
	else
	{
		return false;
	}
}


bool MyStack::pop(char &elem) //出栈函数
{                          
	if (stackEmpty())      
	{
		return false;
	}
	else
	{             //因为每次元素入栈后，栈顶都做了加1操作，指向下一个元素入栈将要存放的位置；
		m_iTop--;      //出栈时，需要将栈顶减1才能取出元素
		elem = m_pBuffer[m_iTop];
		return true;
	}
}

//char MyStack::pop()    // 或用char返回类型实现出栈
//{
//	if (stackEmpty())
//	{
//		throw "error";
//	}
//	else
//	{
//		m_iTop--;
//		return m_pBuffer[m_iTop];
//	}
//}

void MyStack::stackTraverse(bool isFromButton)  //遍历
{
	if (isFromButton)
	{
		for (int i = 0; i < m_iTop; i++)  //从栈底到栈顶
		{
			cout << m_pBuffer[i] << ",";
		}
	}
	else
	{
		for (int i = m_iTop - 1; i >= 0; i--)
		{
			cout << m_pBuffer[i] << ",";
		}
	}
}

