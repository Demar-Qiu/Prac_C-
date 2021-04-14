#pragma once
#include<iostream>
using namespace std;    // ģ����Ĵ��벻�ܷ�����룬��Ҫ����.h�ļ���

template<typename T,int KSize,int KVal>   
class MyArray
{
public:
	MyArray();
	~MyArray()
	{
		delete[]m_pArr;    //��������������
		m_pArr = NULL;
	}
	void Display();
private:
	T* m_pArr;  //Tָ������
};

template<typename T,int KSize,int KVal>   // ÿ����Ա��������ǰ��Ҫ�������
MyArray<T, KSize, KVal>::MyArray()      //��������������
{ 
	m_pArr = new T[KSize];
	for (int i = 0; i < KSize; i++)
	{
		m_pArr[i] = KVal;
	}
}

//template<typename T, int KSize, int KVal>
//MyArray<T,KSize,KVal>::~MyArray()        //��������������
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
