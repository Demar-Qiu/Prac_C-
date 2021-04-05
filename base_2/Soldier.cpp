#include<iostream>
#include"Soldier.h"
using namespace std;

Soldier::Soldier()
{

}

void Soldier::work()
{
	m_strName = "Jim";    //访问基类的数据成员
	m_iAge = 20;
	cout << m_strName << endl;
	cout << m_iAge << endl;
	cout << "Soldier--work()" << endl;
}

void Soldier::play()
{
	cout << "Soldier play()" << endl;
}

