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

//Coordinate& Coordinate::operator-()     //���ŵĳ�Ա��������
//{
//	this->m_iX = -(this->m_iX);   // ����д������ 
//	m_iY = -m_iY;    // ���ַ�ʽһ��
//	return *this;
//}

Coordinate& operator-(Coordinate &coor)     //���ŵĳ�Ա��������
{
	coor.m_iX = -coor.m_iX;   
	coor.m_iY = -coor.m_iY;
	return coor;
}

Coordinate& Coordinate::operator++()     //ǰ��++�ĳ�Ա��������
{
	m_iX ++;
	m_iY ++;
	return *this;
}

Coordinate Coordinate::operator++(int)  //����++�ĳ�Ա��������
{
	Coordinate old(*this);  //thisָ��ָ�����ԭ��ʱ���󣬸�ֵ��old����󷵻ص�Ҳ�����old
	this->m_iX++;
	this->m_iY++;
	return old;        //ע��������Ҫ�����������ʱ�������Բ�������
}




