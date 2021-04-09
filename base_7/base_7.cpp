#include<iostream>
#include"Shape.h"
#include"Circle.h"
#include<stdlib.h>
using namespace std;
/*
  虚函数表
	 1、Shape类：成员函数:构造、析构和calcArea()
	 2、Circle类：成员函数：构造、析构；数据成员：m_iR

	 相关概念：对象大小：指的是类实例化出的对象的数据成员大小
			   对象地址：对象在内存当中占有的第一个内存单元的地址
			   对象成员的地址：对象的数据成员所占的地址（看数据类型）
			   虚函数表指针：在具有虚函数的情况下实例化的对象，其第一个内存存储的是一个指针
	  这样可以通过计算对象大小，证明虚函数表指针的存在
	 */


int main()
{
	Shape shape;
	cout << sizeof(shape) << endl;  //(无虚函数下)输出为1，表示标记对象的存在
	          //加了virtual后，输出4，说明含有一个虚函数表指针

	int *p = (int *)&shape;
	//cout << p << endl;      //打印shape对象的地址
	cout << (unsigned int)(*p) << endl;

	Circle circle(100);
	//cout << sizeof(circle) << endl;  //(无虚函数下)输出为4,有则8

	int *q = (int *)&circle;
	cout << q << endl;      //打印circle对象的地址
	cout << (unsigned int)(*q) << endl;  //(无虚函数下)输出100，即q指向对象数据成员m_iR
	  //加了virtual后，第一个内存存的是虚函数表指针、之后才是存的数据成员
	q++;
	cout << (unsigned int)(*q) << endl;  //再输出100（数据成员）

	return 0;
}