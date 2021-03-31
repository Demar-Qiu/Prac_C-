#include<iostream>
#include"Coord.h"
using namespace std;

Coord::Coord(int x,int y)         // 定义默认构造函数
{
	m_iX = x;
	m_iY = y;
	cout << "Coord()  " <<m_iX<<","<<m_iY<< endl;
}

Coord::~Coord()      //析构函数
{
	cout << "~Coord()  " <<m_iX<<","<<m_iY<< endl;
}

void Coord::setX(int x)  //横坐标的数据封装函数
{
	m_iX = x;
}

int Coord::getX()
{
	return m_iX;
}

void Coord::setY(int y)  //纵坐标的数据封装函数
{
	m_iY = y;  
}

int Coord::getY()
{
	return m_iY;
}
