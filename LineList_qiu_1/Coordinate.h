#pragma once
#include<iostream>
using namespace std;
class Coordinate
{
	//输出运算符<<重载
	friend ostream& operator<<(ostream& out, Coordinate& coor);

public:
	Coordinate(int x = 0, int y = 0);
	void printCoordinate();  //为了输出（也可以用运算符输出重载）
	bool operator==(Coordinate& coor);  //==运算符重载
private:
	int m_iX;
	int m_iY;
};
