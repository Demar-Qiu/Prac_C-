#pragma once
#include"Coord.h"

/* �߶�������� */
class Line
{
public:
	Line(int x1,int y1,int x2,int y2 );
	~Line();
	void setA(int x, int y);
	void setB(int x, int y);
	void printInfo();
	void printInfo() const;
private:
	const Coord m_coorA;   // A��    ������Ϊ���ݳ�Ա
	Coord m_coorB;  // B��
};

