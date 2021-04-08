#include<iostream>
#include<stdlib.h>
#include"Circle.h"
#include"Rect.h"
using namespace std;

/*  动态多态、虚函数、虚析构函数
      1、定义Shape类，成员函数：calcArea()、构造和析构
	  2、定义Rect类（矩形），成员函数：calcArea()计算面积、构造和析构
	                 数据成员：m_dWidth,m_dHeight
	  3、定义Circle类（圆），成员函数：calcArea()，构造和析构
	                   数据成员：m_dR、m_pCenter
	  4、定义Coordinate类，成员函数：构造、析构
	                   数据成员：m_iX,m_iY
 
*/


int main()
{
	Shape *shape1 = new Rect(3, 6);  //用父类指针指向子类对象（实例化）
	Shape *shape2 = new Circle(5);

	shape1->calcArea();
	shape2->calcArea();     //若父类的calcArea（）函数未加virtual,则此时调用的是父类的calcArea（）

	delete shape1;
	shape1 = NULL;
	delete shape2;
	shape2 = NULL;     // 此时销毁不了子类对象,在Shape的析构函数前加virtual才行

	return 0;
}