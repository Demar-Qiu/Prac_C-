#pragma once
#include"Person.h"
class Soldier :public Person
//class Soldier:protected Person
{
public:
	Soldier();
	void work();
	void play();
protected:
	int m_iAge;
};