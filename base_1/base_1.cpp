#include<iostream>
#include<stdlib.h>
#include"Worker.h"
using namespace std;


/*
  继承:1、定义Person类，含有某些数据成员及构造函数、析构函数和eat函数
       2、定义Worker类 公有继承Person，含数据成员、构造、析构函数和work函数
*/


int main()
{
	Worker *p = new Worker();
	p->m_strName = "Tom";
	p->m_iAge = 15;
	p->eat();
	p->m_iSalary = 1000;
	p->work();
	delete p;
	p = NULL;


	return 0;
}