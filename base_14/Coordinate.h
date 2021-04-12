#pragma once
#include<iostream>
using namespace std;

class Coordinate
{
	friend Coordinate& operator-(Coordinate& coor); //�������ŵ����������(��Ԫ��������)
public:
	Coordinate(int x, int y);

	//Coordinate& operator-();   //�������ŵ����������(��Ա����)
	Coordinate& operator++();  //����ǰ��++�����������(��Ա����)
	Coordinate operator++(int); //��������++�����������

	int getX();
	int getY();
private:
	int m_iX;
	int m_iY;
};