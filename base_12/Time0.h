#pragma once
#include<iostream>
using namespace std;

class Match0;
class Time0
{
	friend Match0;

public:
	Time0(int hour, int min, int sec);

private:
	void printTime();
	int m_iHour;
	int m_iMinute;
	int m_iSecond;
};