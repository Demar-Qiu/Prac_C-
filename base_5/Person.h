#pragma once    //避免重定义
#ifndef PERSON_H              // 两种方式都可以
#define PERSON_H

#include<string>
using namespace std;

class Person
{
public:
	Person(string color = "blue");  
	virtual ~Person();
	void printColor();
protected:
	string m_strColor;   //肤色
};

#endif