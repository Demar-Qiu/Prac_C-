#include<iostream>
#include<stdlib.h>
#include"FighterPlane.h"
using namespace std;

/*   
  �ӿ���
  1��Flyable�࣬��Ա������takeoff(),land()
  2��Plane�࣬��Ա���������� takeoff,land,printCode;���ݳ�Ա��m_strCode
  3��FighterPlane�࣬��Ա���������� takeoff��land
  4��ȫ�ֺ���flyMatch(Flyable *f1,Flyable *f2)

*/

void flyMatch(Flyable *f1, Flyable *f2)//�����Flyable����ָ�루�����˴��ε����ͣ�
{
	f1->takeoff();    //���ýӿ��൱�еĴ��麯��
	f1->land();
	f2->takeoff();
	f2->land();

}

int main()
{
	//Plane p1("001");
	//Plane p2("002");
	//p1.printCode();
	//p2.printCode();

	FighterPlane p3("003");
	FighterPlane p4("004");

	//flyMatch(&p1, &p2);
	flyMatch(&p3, &p4);   //��ͨ���ӿ���ɻ���ս�����ֱ�����˲�ͬ��ʵ��

	return 0;
}