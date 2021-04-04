#pragma once
#include"Person.h"

/* Worker¿‡ºÃ≥–Person¿‡ */
class Worker :public Person
{
public:
	Worker();
	~Worker();
	void work();
	int m_iSalary;
};
