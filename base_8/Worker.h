#pragma once
#include"Person.h"

class Worker:public Person
{
public:
	Worker(string name, int age);
	//virtual void work();  //��δʵ�֣���WorkerҲ��һ��������
private:
	int m_iAge;
};