#include<iostream>
#include<stdlib.h>
#include"Person.h"
#include"Dustman.h"
#include"Worker.h"
using namespace std;


/*
���麯�������ࣺ
   1��Person�࣬��Ա���������� ���� ���麯��work()�����ݳ�Աm_strName
   2��Worker�࣬��Ա���������� work�����ݳ�Ա m_iAge
   3��Dustman�࣬��Ա���������� work

*/


int main()
{
	//Person person;   //�������޷�ʵ��������
	//Worker worker("ZhangSan", 24);  //WorkerҲ�޷�ʵ����
	Dustman dustman("Sam", 22);
	dustman.work();

	return 0;
}