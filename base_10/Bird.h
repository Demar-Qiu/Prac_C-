#pragma once
#include<string>
#include"Flyable.h"
using namespace std;

class Bird :public Flyable
{
public:
	void foraging();  //����еĳ�Ա����
	virtual void takeoff();
	virtual void land();

};