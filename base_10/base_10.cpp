#include<iostream>
#include"Bird.h"
#include"Plane.h"
#include<typeinfo>
using namespace std;

/*
   RTTI 运行时类型识别
      1、Flyable类，成员函数：takeoff,land
	  2、Plane类，成员函数：takeoff,land,carry
	  3、Bird类，成员函数：takeoff,land,foraging
	  4、全局函数doSomething(Flyable *obj)

*/

void doSomething(Flyable *obj)
{
	cout << typeid(*obj).name() << endl;//打印obj指向的对象数据类型
	obj->takeoff();
	if (typeid(*obj) == typeid(Bird)) //判断obj指向的对象类型是不是Bird类型
	{
		Bird* bird = dynamic_cast<Bird*>(obj); //将obj指针转化为Bird*
		bird->foraging();
	}
	if (typeid(*obj) == typeid(Plane)) //判断obj指向的对象类型是不是Bird类型
	{
		Plane* plane = dynamic_cast<Plane*>(obj); //将obj指针转化为Bird*
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