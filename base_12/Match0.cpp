#include"Match0.h"
#include<iostream>
using namespace std;

Match0::Match0(int hour, int min, int sec) :m_tTimer(hour, min, sec)
{

}

void Match0::testTime()
{
	m_tTimer.printTime();
	cout << m_tTimer.m_iHour << ":" << m_tTimer.m_iMinute << ":" << m_tTimer.m_iSecond << endl;
}