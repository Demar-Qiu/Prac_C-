#pragma once
#include<string>
#include"Flyable.h"
using namespace std;

class Plane :public Flyable
{
public:
	void carry();   //�ɻ����еĳ�Ա����
	virtual void takeoff();
	virtual void land();

};