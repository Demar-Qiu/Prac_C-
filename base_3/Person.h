#pragma once
#include<string>
using namespace std;

class Person
{
public:
	Person(string name = "Jim");  //Ĭ�Ϲ��캯��
	virtual ~Person();
	void play();
protected:
	string m_strName;

};