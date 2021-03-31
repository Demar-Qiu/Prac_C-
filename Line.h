#pragma once
#include"Coord.h"

/* 线段类的声明 */
class Line
{
public:
	Line(int x1,int y1,int x2,int y2 );
	~Line();
	void setA(int x, int y);
	void setB(int x, int y);
	void printInfo();
private:
	Coord m_coorA;   // A点
	Coord m_coorB;  // B点
};