#include<iostream>
#include"Time.h"
#include"Match.h"
#include"Match0.h"
using namespace std;

/*
  友元函数
  1、友元全局函数 ，通过Time类完成
  2、友元成员函数 ，通过Time类和Match类完成
  友元类
*/

//void printTime(Time &t);

int main()
{
	Time t(6, 34, 25);
	Match m;
	m.printTime(t); ////通过友元成员函数（Match类中）访问私有数据成员
	
	//printTime(t);  //通过友元全局函数访问私有数据成员

	Match0 m0(2, 30, 52);
	m0.testTime();

	return 0;
}

//void printTime(Time& t)     //友元全局函数
//{
//	cout << t.m_iHour << ":" << t.m_iMinute << ":" << t.m_iSecond << endl;
//}