#pragma once
#include"Person.h"

/* Worker��̳�Person�� */
class Worker :public Person
{
public:
	Worker();
	~Worker();
	void work();
	int m_iSalary;
};
