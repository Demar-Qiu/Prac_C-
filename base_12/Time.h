#pragma once
#include<iostream>
#include"Match.h"
using namespace std;

class Time
{
	friend void Match::printTime(Time& t); //��Ԫ��Ա��������
	//friend void printTime(Time& t);  //��Ԫȫ�ֺ�������
public:
	Time(int hour, int min, int sec);

private:
	int m_iHour;
	int m_iMinute;
	int m_iSecond;
};