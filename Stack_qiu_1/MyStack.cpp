//#include"MyStack.h"
//#include<iostream>
//using namespace std;
//
//template<typename T>
//MyStack<T>::MyStack(int size)  //���캯��
//{ 
//	m_iSize = size;
//	m_pBuffer = new T[m_iSize];
//	m_iTop = 0;   //��ջ
//}
//
//template<typename T>
//MyStack<T>::~MyStack()    //��������
//{
//	delete[]m_pBuffer;
//	m_pBuffer = NULL;
//}
//
//template<typename T>
//bool MyStack<T>::stackEmpty()   //�пպ���
//{
//	return 0 == m_iTop ? true : false;
//}
//
//template<typename T>
//bool MyStack<T>::stackFull()  //��������
//{
//	return m_iSize == m_iTop ? true : false;
//}
//
//template<typename T>
//void MyStack<T>::clearStack()   //�������
//{
//	m_iTop = 0;
//}
//
//template<typename T>
//int MyStack<T>::stackLength()
//{
//	return m_iTop;
//}
//
//template<typename T>
//bool MyStack<T>::push(T elem) //��ջ���� ������ջ���� ,Ҳ����bool��������
//{
//	if (!stackFull())
//	{
//		m_pBuffer[m_iTop] = elem;  //��ֵҪע�⣨������ǳ������
//		m_iTop++;
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//template<typename T>
//bool MyStack<T>::pop(T &elem) //��ջ����
//{                          
//	if (stackEmpty())      
//	{
//		return false;
//	}
//	else
//	{             //��Ϊÿ��Ԫ����ջ��ջ�������˼�1������ָ����һ��Ԫ����ջ��Ҫ��ŵ�λ�ã�
//		m_iTop--;      //��ջʱ����Ҫ��ջ����1����ȡ��Ԫ��
//		elem = m_pBuffer[m_iTop];
//		return true;
//	}
//}
//
////char MyStack::pop()    // ����char��������ʵ�ֳ�ջ
////{
////	if (stackEmpty())
////	{
////		throw "error";
////	}
////	else
////	{
////		m_iTop--;
////		return m_pBuffer[m_iTop];
////	}
////}
//
//template<typename T>
//void MyStack<T>::stackTraverse(bool isFromButton)  //����
//{
//	if (isFromButton)
//	{
//		for (int i = 0; i < m_iTop; i++)  //��ջ�׵�ջ��
//		{
//			cout << m_pBuffer[i] ;
//			//m_pBuffer[i].printCoordinate();
//		}
//	}
//	else
//	{
//		for (int i = m_iTop - 1; i >= 0; i--)
//		{
//			cout << m_pBuffer[i] ;
//			//m_pBuffer[i].printCoordinate();
//		}
//	}
//}
//
