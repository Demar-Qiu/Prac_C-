#pragma once
#include<string>
#include"Flyable.h"
using namespace std;

class Bird :public Flyable
{
public:
	void foraging();  //鸟独有的成员函数
	virtual void takeoff();
	virtual void land();

};