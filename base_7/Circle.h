#pragma once
#include"Shape.h"

class Circle :public Shape
{
public:
	Circle(int r);
	~Circle();
protected:
	int  m_iR;

};