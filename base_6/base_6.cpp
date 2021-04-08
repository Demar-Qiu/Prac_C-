#include<iostream>
#include<stdlib.h>
#include"Circle.h"
#include"Rect.h"
using namespace std;

/*  ��̬��̬���麯��������������
      1������Shape�࣬��Ա������calcArea()�����������
	  2������Rect�ࣨ���Σ�����Ա������calcArea()������������������
	                 ���ݳ�Ա��m_dWidth,m_dHeight
	  3������Circle�ࣨԲ������Ա������calcArea()�����������
	                   ���ݳ�Ա��m_dR��m_pCenter
	  4������Coordinate�࣬��Ա���������졢����
	                   ���ݳ�Ա��m_iX,m_iY
 
*/


int main()
{
	Shape *shape1 = new Rect(3, 6);  //�ø���ָ��ָ���������ʵ������
	Shape *shape2 = new Circle(5);

	shape1->calcArea();
	shape2->calcArea();     //�������calcArea��������δ��virtual,���ʱ���õ��Ǹ����calcArea����

	delete shape1;
	shape1 = NULL;
	delete shape2;
	shape2 = NULL;     // ��ʱ���ٲ����������,��Shape����������ǰ��virtual����

	return 0;
}