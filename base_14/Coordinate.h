#pragma once
#include<iostream>
using namespace std;

class Coordinate
{
	friend Coordinate& operator-(Coordinate& coor); //声明负号的重载运算符(友元函数函数)
public:
	Coordinate(int x, int y);

	//Coordinate& operator-();   //声明负号的重载运算符(成员函数)
	Coordinate& operator++();  //声明前置++的重载运算符(成员函数)
	Coordinate operator++(int); //声明后置++的重载运算符

	int getX();
	int getY();
private:
	int m_iX;
	int m_iY;
};