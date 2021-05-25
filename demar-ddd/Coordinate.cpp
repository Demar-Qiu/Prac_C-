#include"Coordinate.h"
#include<iostream>
using namespace std;


Coordinate::Coordinate(int x, int y)
{
	m_iX = x;
	m_iY = y;
}


ostream& operator<<(ostream& out, Coordinate& coor)
{
	out << "(" << coor.m_iX << "," << coor.m_iY << ")" << endl;
	return out;
}

bool Coordinate::operator==(Coordinate& coor)
{
	if (this->m_iX == coor.m_iX && this->m_iY == coor.m_iY)
		return true;
	else
		return false;
}




