#pragma once

/* ����������� */
class Coord 
{
public:
	Coord(int x,int y);
	~Coord();
	void setX(int x);
	int getX() const;
	void setY(int Y);
	int getY() const;
private:
	int m_iX; // ������
	int m_iY; // ������

};

