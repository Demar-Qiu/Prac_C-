#include<iostream>
#include"Shape.h"
#include"Circle.h"
#include<stdlib.h>
using namespace std;
/*
  �麯����
	 1��Shape�ࣺ��Ա����:���졢������calcArea()
	 2��Circle�ࣺ��Ա���������졢���������ݳ�Ա��m_iR

	 ��ظ�������С��ָ������ʵ�������Ķ�������ݳ�Ա��С
			   �����ַ���������ڴ浱��ռ�еĵ�һ���ڴ浥Ԫ�ĵ�ַ
			   �����Ա�ĵ�ַ����������ݳ�Ա��ռ�ĵ�ַ�����������ͣ�
			   �麯����ָ�룺�ھ����麯���������ʵ�����Ķ������һ���ڴ�洢����һ��ָ��
	  ��������ͨ����������С��֤���麯����ָ��Ĵ���
	 */


int main()
{
	Shape shape;
	cout << sizeof(shape) << endl;  //(���麯����)���Ϊ1����ʾ��Ƕ���Ĵ���
	          //����virtual�����4��˵������һ���麯����ָ��

	int *p = (int *)&shape;
	//cout << p << endl;      //��ӡshape����ĵ�ַ
	cout << (unsigned int)(*p) << endl;

	Circle circle(100);
	//cout << sizeof(circle) << endl;  //(���麯����)���Ϊ4,����8

	int *q = (int *)&circle;
	cout << q << endl;      //��ӡcircle����ĵ�ַ
	cout << (unsigned int)(*q) << endl;  //(���麯����)���100����qָ��������ݳ�Աm_iR
	  //����virtual�󣬵�һ���ڴ������麯����ָ�롢֮����Ǵ�����ݳ�Ա
	q++;
	cout << (unsigned int)(*q) << endl;  //�����100�����ݳ�Ա��

	return 0;
}