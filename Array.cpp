#include"Array.h"
#include<iostream>
using namespace std;

Array::Array(int len)
{
	this->len = len;     //数组长度,将参数len赋值给数据成员len(初始化)
}

void Array::setLen(int len)   
{
	this->len = len;
}
int Array::getLen()
{
	return len;
}

//Array Array::printInfo()   
//{
//	cout << "len= " << len << endl;
//	return *this;       //返回this指向的对象(注意这里是另外的临时对象)
//}

//Array& Array::printInfo()
//{
//	cout << "len= " << len << endl;
//	return *this;       //返回this指向的实例化对象本身（加引用）
//                        // return this 返回对象的地址
//}

Array* Array::printInfo()
{
	cout << this << endl;
	return this;
}







//Array::Array(int count)   //构造函数
//{
//	m_iCount = count;
//	m_pArr = new int[m_iCount];
//	for (int i = 0; i < m_iCount; i++)
//	{
//		m_pArr[i] =i;     // 实例化时，给内存赋值
//	}
//
//	cout << "Array" << endl;
//}
//
//Array::Array(const Array& arr)   //拷贝构造函数
//{
//
//	//m_pArr = arr.m_pArr;   //浅拷贝
//
//	m_iCount = arr.m_iCount;   //深拷贝
//	m_pArr = new int[m_iCount];
//	for (int i = 0; i < m_iCount; i++)   
//   	{
//		m_pArr[i] = arr.m_pArr[i];   
//	}
//
//	cout << "Array&" << endl;
//}

Array::~Array()
{
	delete[]m_pArr;
	m_pArr = NULL;
	cout << "~Array" << endl;
}

void Array::setCount(int count)
{
	m_iCount = count;
}
int Array::getCount()
{
	return m_iCount;
}

void Array::printAddr()
{
	cout << "m_pArr的值是：" << m_pArr << endl;
}

void Array::printArr()
{
	for (int i = 0; i < m_iCount; i++)
	{
		cout<<m_pArr[i]<<endl;    
	}
}