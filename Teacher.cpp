#include<iostream>
#include "Teacher.h"
using namespace std;

Teacher::Teacher()     //无参构造函数
{
	m_strName = "Jim";
	m_iAge = 5;
	cout << "Teacher()" << endl;
}
Teacher::Teacher(string name, int age)  //有参构造函数
{
	m_strName = name;
	m_iAge = age;
	cout << "Teacher(string name,int age)" << endl;
}
void Teacher::setName(string _name)
{
	m_strName = _name;
}

string Teacher::getName()
{
	return m_strName;
}

void Teacher::setGender(string _gender)
{
	m_strGender = _gender;
}
string Teacher::getGender()
{
	return m_strGender;
}

void Teacher::setAge(int _age)
{
	m_iAge = _age;
}
int Teacher::getAge()
{
	return m_iAge;
}
void Teacher::teach()
{
	cout << "现在上课..." << endl;
}
