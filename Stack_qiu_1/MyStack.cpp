//#include"MyStack.h"
//#include<iostream>
//using namespace std;
//
//template<typename T>
//MyStack<T>::MyStack(int size)  //构造函数
//{ 
//	m_iSize = size;
//	m_pBuffer = new T[m_iSize];
//	m_iTop = 0;   //空栈
//}
//
//template<typename T>
//MyStack<T>::~MyStack()    //析构函数
//{
//	delete[]m_pBuffer;
//	m_pBuffer = NULL;
//}
//
//template<typename T>
//bool MyStack<T>::stackEmpty()   //判空函数
//{
//	return 0 == m_iTop ? true : false;
//}
//
//template<typename T>
//bool MyStack<T>::stackFull()  //判满函数
//{
//	return m_iSize == m_iTop ? true : false;
//}
//
//template<typename T>
//void MyStack<T>::clearStack()   //清除函数
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
//bool MyStack<T>::push(T elem) //入栈函数 （放入栈顶） ,也可以bool返回类型
//{
//	if (!stackFull())
//	{
//		m_pBuffer[m_iTop] = elem;  //赋值要注意（这里是浅拷贝）
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
//bool MyStack<T>::pop(T &elem) //出栈函数
//{                          
//	if (stackEmpty())      
//	{
//		return false;
//	}
//	else
//	{             //因为每次元素入栈后，栈顶都做了加1操作，指向下一个元素入栈将要存放的位置；
//		m_iTop--;      //出栈时，需要将栈顶减1才能取出元素
//		elem = m_pBuffer[m_iTop];
//		return true;
//	}
//}
//
////char MyStack::pop()    // 或用char返回类型实现出栈
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
//void MyStack<T>::stackTraverse(bool isFromButton)  //遍历
//{
//	if (isFromButton)
//	{
//		for (int i = 0; i < m_iTop; i++)  //从栈底到栈顶
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
