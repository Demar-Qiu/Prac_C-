#include<iostream>
#include<stdlib.h>
#include"Soldier.h"
#include"Infantry.h"
/*
保护继承和私有继承
   要求：1、Person类，数据成员：m_strName,成员函数：构造、play()
         2、Soldier类,数据成员：m_iAge,成员函数：构造、work()
		 3、Infantry步兵类，成员函数：attack()
*/

int main()
{
	//Soldier soldier;
	//soldier.work();
	//soldier.play();   // 保护继承时，派生类对象不能访问基类的任何成员

	Infantry soldier;
	soldier.attack();  //步兵类的公有成员函数可以访问Person中继承来的保护成员，说明Person中的保护成员被保护继承到了Soldier类中
	                  // 若Soldier私有继承Person,步兵类的成员函数不可访问Person的数据成员
	
	Soldier so;
	so.play();
	so.Person::play();
	
	return 0;
}