#pragma once
#include<iostream>
using namespace std;

class Coordinate
{
	friend Coordinate operator+(const Coordinate& c1, const Coordinate& c2);//+运算符的友元函数重载声明
	friend ostream& operator<<(ostream& out, const Coordinate& coor);   //输出运算符<<重载的声明
public:
	Coordinate(int x, int y);

	//Coordinate operator+(Coordinate &c); //+运算符的成员函数重载
	int operator[](int index);  //索引运算符[]的重载

	int getX();
	int getY();

private:
	int m_iX;
	int m_iY;
};