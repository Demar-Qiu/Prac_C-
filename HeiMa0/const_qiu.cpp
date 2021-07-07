#include<iostream>
using namespace std;


//常函数  （属性不可修改）
//常对象只能调用常函数

class Student
{
public:
	void showStu()const  //this指针本质上是指针常量，指针的值（也就是地址）是不可修改的
	// this相当于是Student* const this
	{
		//m_A = 100;   //此时相当于是const Student* const this，指针指向的值可修改
	}
	int m_A; //（特殊变量，即使在常函数中也可修改，前面加关键字mutable）
};


int main_11()
{
	const Student s1;  //常对象
	//s1.m_A=200;


	return 0;
}