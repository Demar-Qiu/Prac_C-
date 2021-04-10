#include<iostream>
#include"Bird.h"
#include"Plane.h"
#include<typeinfo>
using namespace std;

/*
   RTTI ����ʱ����ʶ��
      1��Flyable�࣬��Ա������takeoff,land
	  2��Plane�࣬��Ա������takeoff,land,carry
	  3��Bird�࣬��Ա������takeoff,land,foraging
	  4��ȫ�ֺ���doSomething(Flyable *obj)

*/

void doSomething(Flyable *obj)
{
	cout << typeid(*obj).name() << endl;//��ӡobjָ��Ķ�����������
	obj->takeoff();
	if (typeid(*obj) == typeid(Bird)) //�ж�objָ��Ķ��������ǲ���Bird����
	{
		Bird* bird = dynamic_cast<Bird*>(obj); //��objָ��ת��ΪBird*
		bird->foraging();
	}
	if (typeid(*obj) == typeid(Plane)) //�ж�objָ��Ķ��������ǲ���Bird����
	{
		Plane* plane = dynamic_cast<Plane*>(obj); //��objָ��ת��ΪBird*
		plane->carry();
	}
	obj->land();

}

int main()
{
	Bird b;
	doSomething(&b);

	//Flyable *p = new Bird();
	//cout << typeid(p).name << endl;
	//cout << typeid(*p).name << endl;

	return 0;
}