#include<iostream>
#include<stdlib.h>
#include"MigrantWorker.h"

/*
虚继承
    1、Farmer类,数据成员：m_strCode,成员函数：构造、析构和sow()
    2、Worker类，数据成员：m_strCode,成员函数：构造、析构和carry()
    3、MigrantWorker类，数据成员：无，成员函数：构造、析构
    4、Person类，数据成员：m_strColor,成员函数：构造、析构和printColor()
*/


int main()
{
    MigrantWorker* p = new MigrantWorker("Mike", "017", "yellow");
    p->carry();
    p->sow();
    //p->printColor();
    p->Farmer::printColor();
    p->Worker::printColor();    //此时农民工对象中有两份Person中相同的数据成员（一个来自Farmer,一个来自Worker）
    /* 要解决上述情况，只有Person中的一份 用虚继承*/
    //使用虚继承时虽然不会重复调用最顶层父类的构造函数和析构函数，
    //但参数只能使用最顶层父类默认值，而无法从子类中获得传入的值

    delete p;
    p = NULL;


    return 0;
}