#include<iostream>
#include"Time.h"
#include"Match.h"
#include"Match0.h"
using namespace std;

/*
  ��Ԫ����
  1����Ԫȫ�ֺ��� ��ͨ��Time�����
  2����Ԫ��Ա���� ��ͨ��Time���Match�����
  ��Ԫ��
*/

//void printTime(Time &t);

int main()
{
	Time t(6, 34, 25);
	Match m;
	m.printTime(t); ////ͨ����Ԫ��Ա������Match���У�����˽�����ݳ�Ա
	
	//printTime(t);  //ͨ����Ԫȫ�ֺ�������˽�����ݳ�Ա

	Match0 m0(2, 30, 52);
	m0.testTime();

	return 0;
}

//void printTime(Time& t)     //��Ԫȫ�ֺ���
//{
//	cout << t.m_iHour << ":" << t.m_iMinute << ":" << t.m_iSecond << endl;
//}