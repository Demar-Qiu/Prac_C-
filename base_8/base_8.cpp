#include<iostream>
#include<stdlib.h>
#include"Person.h"
#include"Dustman.h"
#include"Worker.h"
using namespace std;


/*
纯虚函数抽象类：
   1、Person类，成员函数：构造 析构 纯虚函数work()；数据成员m_strName
   2、Worker类，成员函数：构造 work，数据成员 m_iAge
   3、Dustman类，成员函数：构造 work

*/


int main()
{
	//Person person;   //抽象类无法实例化对象
	//Worker worker("ZhangSan", 24);  //Worker也无法实例化
	Dustman dustman("Sam", 22);
	dustman.work();

	return 0;
}