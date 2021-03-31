#pragma once

/* 坐标类的声明 */
class Coord 
{
public:
	Coord(int x,int y);
	~Coord();
	void setX(int x);
	int getX();
	void setY(int Y);
	int getY();
private:
	int m_iX; // 横坐标
	int m_iY; // 纵坐标

};

