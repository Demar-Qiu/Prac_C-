#include<iostream>
#include<stdlib.h>
#include"Worker.h"
using namespace std;


/*
  �̳�:1������Person�࣬����ĳЩ���ݳ�Ա�����캯��������������eat����
       2������Worker�� ���м̳�Person�������ݳ�Ա�����졢����������work����
*/


int main()
{
	Worker *p = new Worker();
	p->m_strName = "Tom";
	p->m_iAge = 15;
	p->eat();
	p->m_iSalary = 1000;
	p->work();
	delete p;
	p = NULL;


	return 0;
}