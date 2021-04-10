#include<iostream>
#include<stdlib.h>
#include"FighterPlane.h"
using namespace std;

/*   
  接口类
  1、Flyable类，成员函数：takeoff(),land()
  2、Plane类，成员函数：构造 takeoff,land,printCode;数据成员：m_strCode
  3、FighterPlane类，成员函数：构造 takeoff、land
  4、全局函数flyMatch(Flyable *f1,Flyable *f2)

*/

void flyMatch(Flyable *f1, Flyable *f2)//传入的Flyable类型指针（限制了传参的类型）
{
	f1->takeoff();    //调用接口类当中的纯虚函数
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
	flyMatch(&p3, &p4);   //即通过接口类飞机和战斗机分别完成了不同的实现

	return 0;
}