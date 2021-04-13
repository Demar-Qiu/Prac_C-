#include<iostream>
#include"Coordinate.h"
using namespace std;

Coordinate::Coordinate(int x, int y)
{
	m_iX = x;
	m_iY = y;
}

int Coordinate::getX()
{
	return m_iX;
}

int Coordinate::getY()
{
	return m_iY;
}

//Coordinate Coordinate::operator+(Coordinate& c) //+运算符的成员函数重载
//{
//	Coordinate temp(0,0);
//	temp.m_iX = this->m_iX + c.m_iX;
//	temp.m_iY = this->m_iY + c.m_iY;
//	return temp;
//}

Coordinate operator+(const Coordinate& c1, const Coordinate& c2) //+运算符的友元函数重载
{
	Coordinate temp(0, 0);
	temp.m_iX = c1.m_iX + c2.m_iX;
	temp.m_iY = c1.m_iY + c2.m_iY;
	return temp;
}

ostream& operator<<(ostream& out, const Coordinate& coor)  // <<输出运算符的友元函数重载
{
	out << coor.m_iX << "," << coor.m_iY << endl; 
	return out;
}

int Coordinate::operator[](int index)  //索引运算符[]的重载实现
{
	if (0 == index)
		return m_iX;
	if (1 == index)
		return m_iY;
}

 