#pragma once
#include<string>
#include"Flyable.h"
using namespace std;
class Plane   //public Flyable
{
public:
	Plane(string code);
	//virtual void takeoff();
	//virtual void land();
	void printCode();
private:
	string m_strCode;
};