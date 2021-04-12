#include<iostream>
#include"Tank.h"
using namespace std;

int Tank::s_iCount = 10;  //�Ծ�̬���ݳ�Ա���е�����ʼ�����ڹ��캯����ߣ�

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

int Tank::getCount()  //����ʱҲ����ӹؼ���static
{
	return s_iCount;
}