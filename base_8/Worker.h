#pragma once
#include"Person.h"

class Worker:public Person
{
public:
	Worker(string name, int age);
	//virtual void work();  //若未实现，则Worker也是一个抽象类
private:
	int m_iAge;
};