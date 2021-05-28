#include"MyStack.h"
#include<iostream>
using namespace std;


MyStack::MyStack(int size)
{
	m_iSize = size;
	m_pBuffer = new char[m_iSize];
	m_iTop = 0;

}


MyStack::~MyStack()
{
	delete[]m_pBuffer;
	m_pBuffer = NULL;
}

bool MyStack::stackEmpty()
{
	return m_iTop == 0 ? true : false;
}

bool MyStack::stackFull()
{
	return m_iTop == m_iSize ? true : false;
}

void MyStack::clearStack()
{
	m_iTop = 0;
}

int MyStack::stackLength()
{
	return m_iTop;
}


bool MyStack::push(char elem)
{
	if (stackFull())
	{
		return false;
	}
	else
	{
		m_pBuffer[m_iTop] = elem;
		m_iTop++;
		return true;
	}
}


bool MyStack::pop(char& elem)
{
	if (stackEmpty())
	{
		return false;
	}
	else
	{
		m_iTop--;    //¹Ø¼ü!!
		elem = m_pBuffer[m_iTop];
		return false;
	}

}

void MyStack::stackTraverse(bool isFromButton)
{

	if (isFromButton)
	{
		for (int i = 0; i < m_iTop; i++)  //´ÓÕ»µ×µ½Õ»¶¥
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











