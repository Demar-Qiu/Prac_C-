#pragma once
#include<iostream>
#include"Match.h"
using namespace std;

class Time
{
	friend void Match::printTime(Time& t); //友元成员函数声明
	//friend void printTime(Time& t);  //友元全局函数声明
public:
	Time(int hour, int min, int sec);

private:
	int m_iHour;
	int m_iMinute;
	int m_iSecond;
};