#pragma once
#include<string>
#include"Flyable.h"
using namespace std;

class Plane :public Flyable
{
public:
	void carry();   //飞机独有的成员函数
	virtual void takeoff();
	virtual void land();

};