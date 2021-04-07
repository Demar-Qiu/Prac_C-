#include<iostream>
#include<stdlib.h>
#include"MigrantWorker.h"

/*
多继承 
   1、Farmer类，数据成员：m_strName,成员函数：构造、析构、sow()
   2、Worker类，数据成员：m_strCode,成员函数：构造、析构、carry()
   3、MigrantWorker类，数据成员：无，成员函数：构造和析构
*/


int main()
{
	MigrantWorker*p = new MigrantWorker("Geroge", "032");
	p->carry();
	p->sow();
	delete p;
	p = NULL;


	return 0;
}