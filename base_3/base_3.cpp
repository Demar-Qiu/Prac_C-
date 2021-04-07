#include<iostream>
#include<stdlib.h>
#include"Soldier.h"

/*
公有继承： Is a
    1、Person类，数据成员：m_strName,成员函数：构造、析构和play()
    2、Soldier类，数据成员：m_iAge,成员函数：构造、析构、work()
    3、定义函数test1(Person p) test2(Person &p) test(Person *p)
*/

void test1(Person p) //
{
    p.play();
}

void test2(Person &p)
{
    p.play();
}
void test3(Person *p)
{
    p->play();
}

int main()
{
    //Soldier soldier;

    //Person p;
    //p = soldier;
    //Person p=soldier;  //使用soldier去初始化p,这里调用拷贝构造函数 
    //p.play();   //soldier当中的m_strName赋值给了p当中的m_strName
    
    //Person* p = &soldier;  //使用指针指向soldier
    //p->play();
    // p->work(); 不可以，Person无法调用其子类的数据成员或成员函数

   /* Person* p = new Soldier;
    p->play();
    delete p;
    p = NULL*/;    //使用父类的指针去释放子类的内存，要用virtual修饰父类的析构函数

    Person p0;
    Soldier s0;
    //test1(p0); //此时实参传给形参，临时变量p调用了Person类的默认拷贝构造函数，没有定义所以不显示,只是释放内存时调用了析构函数
    //test1(s0);

    //test2(p0);
    //test2(s0);

    test3(&p0);
    test3(&s0);       
     
    // test3和test2结构一样，和test1的不同在于后两者调用过程中不会产生新的临时变量，无需再释放内存，这样效率更高    return 0;
}