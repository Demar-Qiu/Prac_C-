#include<iostream>
#include<stdlib.h>
using namespace std;


//struct 和 class 区别在于默认的访问权限不同（一个公有一个私有）



class C1
{
	int m_A;  //默认权限 私有
};

struct C2
{
	int m_A;  //默认公有
};


int main_1()
{
	C1 c1;
	//c1.m_A = 100;
	C2 c2;
	c2.m_A = 100;
	return 0;
}


