#pragma once
#include<iostream>
using namespace std;

class Coordinate
{
	friend Coordinate operator+(const Coordinate& c1, const Coordinate& c2);//+���������Ԫ������������
	friend ostream& operator<<(ostream& out, const Coordinate& coor);   //��������<<���ص�����
public:
	Coordinate(int x, int y);

	//Coordinate operator+(Coordinate &c); //+������ĳ�Ա��������
	int operator[](int index);  //���������[]������

	int getX();
	int getY();

private:
	int m_iX;
	int m_iY;
};