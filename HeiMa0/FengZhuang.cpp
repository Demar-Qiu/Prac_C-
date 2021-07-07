#include<stdlib.h>
#include<iostream>
#include<string>
using namespace std;


/*  
  
  设计一个圆类，求原圆的周长
         2 * pi * 半径
*/

const double PI = 3.14;

class Circle
{
public:
	int m_r;

	double calculateZC()
	{
		return 2 * PI*m_r;
	}

};


class Student
{
public:
	string m_name;
	long m_num;

public:
	void setName(string name)
	{
		m_name = name;
	}
	void setNum(int num)
	{
		m_num = num;
	}

	void displayStu()
	{
		cout << "学生姓名："<<m_name<< " "<< "学生学号:"<<m_num<<endl;
	}

};


int main_0()
{
	Circle c1;
	c1.m_r = 10;
	cout <<"圆的周长为："<<c1.calculateZC() << endl;

	Student s1;
	s1.setName("abc");
	s1.setNum(111);
	//s1.m_name = "阿星";
	//s1.m_num = 20200201;
	s1.displayStu();
	return 0;
}



