#include"Coordinate.h"

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

//Coordinate& Coordinate::operator-()     //负号的成员函数重载
//{
//	this->m_iX = -(this->m_iX);   // 这样写更明显 
//	m_iY = -m_iY;    // 两种方式一样
//	return *this;
//}

Coordinate& operator-(Coordinate &coor)     //负号的成员函数重载
{
	coor.m_iX = -coor.m_iX;   
	coor.m_iY = -coor.m_iY;
	return coor;
}

Coordinate& Coordinate::operator++()     //前置++的成员函数重载
{
	m_iX ++;
	m_iY ++;
	return *this;
}

Coordinate Coordinate::operator++(int)  //后置++的成员函数重载
{
	Coordinate old(*this);  //this指针指向的是原临时对象，赋值给old，最后返回的也是这个old
	this->m_iX++;
	this->m_iY++;
	return old;        //注意这里是要返回最初的临时对象，所以不用引用
}




