#pragma once
#include<iostream>
using namespace std;    // 模板类的代码不能分离编译，都要放在.h文件中

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
	T* m_pArr;  //T指针类型
};

template<typename T,int KSize,int KVal>   // 每个成员函数定义前不要忘了这句
MyArray<T, KSize, KVal>::MyArray()      //函数定义在类外
{ 
	m_pArr = new T[KSize];
	for (int i = 0; i < KSize; i++)
	{
		m_pArr[i] = KVal;
	}
}

//template<typename T, int KSize, int KVal>
//MyArray<T,KSize,KVal>::~MyArray()        //函数定义在类外
//{
//	delete[]m_pArr;         
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
