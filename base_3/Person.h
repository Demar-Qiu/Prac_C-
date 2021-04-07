#pragma once
#include<string>
using namespace std;

class Person
{
public:
	Person(string name = "Jim");  //默认构造函数
	virtual ~Person();
	void play();
protected:
	string m_strName;

};