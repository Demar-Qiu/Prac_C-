#pragma once
#include<iostream>
using namespace std;

template<typename T,int KSize,int KVal>
class MyArray
{
public:
	MyArray();
	~MyArray()
	{
		delete[]m_pArr;    //函数定义在类内
		m_pArr = NULL;
	}
	void Display();
private:
	T* m_pArr;  //T指针
};

template<typename T,int KSize,int KVal>
MyArray<T, KSize, KVal>::MyArray()      //函数定义在类外
{ 
	m_pArr = new T[KSize];
	for (int i = 0; i < KSize; i++)
	{
		m_pArr[i] = KVal;
	}
}

//template<typename T, int KSize, int KVal>
//MyArray<T,KSize,KVal>::~MyArray()
//{
//	delete[]m_pArr;         //函数定义在类外
//	m_pArr = NULL;
//}

template<typename T, int KSize, int KVal>
void MyArray<T, KSize,KVal>::Display()
{
	for (int i = 0; i < KSize; i++)
	{
		cout << m_pArr[i] << endl;
	}
}
