#pragma once
#include<string>
using namespace std;

class Person
{
public:
	Person(string name);
	virtual void work() = 0;  // ´¿Ðéº¯Êý
	virtual~Person(){}
private:
	string m_strName;
};