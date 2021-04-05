#include<iostream>
#include"Infantry.h"
using namespace std;

void Infantry::attack()
{
	m_strName = "Jim";         //访问Person类的保护成员
	cout << m_strName << endl;
	cout << "Infantry--attack()" << endl;
}