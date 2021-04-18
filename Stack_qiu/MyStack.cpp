#include"MyStack.h"
#include<iostream>
using namespace std;


MyStack::MyStack(int size)  //���캯��
{ 
	m_iSize = size;
	m_pBuffer = new char[m_iSize];
	m_iTop = 0;   //��ջ
}

MyStack::~MyStack()    //��������
{
	delete[]m_pBuffer;
	m_pBuffer = NULL;
}

bool MyStack::stackEmpty()   //�пպ���
{
	return 0 == m_iTop ? true : false;
}

bool MyStack::stackFull()  //��������
{
	return m_iSize == m_iTop ? true : false;
}

void MyStack::clearStack()   //�������
{
	m_iTop = 0;
}

int MyStack::stackLength()
{
	return m_iTop;
}

bool MyStack::push(char elem) //��ջ���� ������ջ���� ,Ҳ����bool��������
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


bool MyStack::pop(char &elem) //��ջ����
{                          
	if (stackEmpty())      
	{
		return false;
	}
	else
	{             //��Ϊÿ��Ԫ����ջ��ջ�������˼�1������ָ����һ��Ԫ����ջ��Ҫ��ŵ�λ�ã�
		m_iTop--;      //��ջʱ����Ҫ��ջ����1����ȡ��Ԫ��
		elem = m_pBuffer[m_iTop];
		return true;
	}
}

//char MyStack::pop()    // ����char��������ʵ�ֳ�ջ
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

void MyStack::stackTraverse(bool isFromButton)  //����
{
	if (isFromButton)
	{
		for (int i = 0; i < m_iTop; i++)  //��ջ�׵�ջ��
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

