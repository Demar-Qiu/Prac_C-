#include<iostream>
#include<stdlib.h>
using namespace std;


//struct �� class ��������Ĭ�ϵķ���Ȩ�޲�ͬ��һ������һ��˽�У�



class C1
{
	int m_A;  //Ĭ��Ȩ�� ˽��
};

struct C2
{
	int m_A;  //Ĭ�Ϲ���
};


int main_1()
{
	C1 c1;
	//c1.m_A = 100;
	C2 c2;
	c2.m_A = 100;
	return 0;
}


