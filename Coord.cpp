#include<iostream>
#include"Coord.h"
using namespace std;

Coord::Coord(int x,int y)         // ����Ĭ�Ϲ��캯��
{
	m_iX = x;
	m_iY = y;
	cout << "Coord()  " <<m_iX<<","<<m_iY<< endl;
}

Coord::~Coord()      //��������
{
	cout << "~Coord()  " <<m_iX<<","<<m_iY<< endl;
}

void Coord::setX(int x)  //����������ݷ�װ����
{
	m_iX = x;
}

int Coord::getX()
{
	return m_iX;
}

void Coord::setY(int y)  //����������ݷ�װ����
{
	m_iY = y;  
}

int Coord::getY()
{
	return m_iY;
}
