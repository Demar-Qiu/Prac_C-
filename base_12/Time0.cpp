#include"Time0.h"
#include<iostream>
using namespace std;

Time0::Time0(int hour, int min, int sec)
{
	m_iHour = hour;
	m_iMinute = min;
	m_iSecond = sec;

}

void Time0::printTime()
{
	cout << m_iHour << "ʱ" << m_iMinute << "��" << m_iSecond <<"��"<< endl;
}