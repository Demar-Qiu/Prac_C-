#include<iostream>
#include"Soldier.h"
using namespace std;

Soldier::Soldier()
{

}

void Soldier::work()
{
	m_strName = "Jim";    //���ʻ�������ݳ�Ա
	m_iAge = 20;
	cout << m_strName << endl;
	cout << m_iAge << endl;
	cout << "Soldier--work()" << endl;
}

void Soldier::play()
{
	cout << "Soldier play()" << endl;
}

