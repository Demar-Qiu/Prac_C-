#include<stdlib.h>
#include<iostream>
#include<string>
using namespace std;


/*  
  
  ���һ��Բ�࣬��ԭԲ���ܳ�
         2 * pi * �뾶
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
		cout << "ѧ��������"<<m_name<< " "<< "ѧ��ѧ��:"<<m_num<<endl;
	}

};


int main_0()
{
	Circle c1;
	c1.m_r = 10;
	cout <<"Բ���ܳ�Ϊ��"<<c1.calculateZC() << endl;

	Student s1;
	s1.setName("abc");
	s1.setNum(111);
	//s1.m_name = "����";
	//s1.m_num = 20200201;
	s1.displayStu();
	return 0;
}



