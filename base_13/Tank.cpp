#include<iostream>
#include"Tank.h"
using namespace std;

int Tank::s_iCount = 10;  //对静态数据成员进行单独初始化（在构造函数外边）

Tank::Tank(char code)
{
	m_cCode = code;
	s_iCount++;
	cout << "Tank" << endl;
}

Tank::~Tank()
{
	s_iCount--;
	cout << "~Tank" << endl;
}

int Tank::getCount()  //定义时也无需加关键字static
{
	return s_iCount;
}