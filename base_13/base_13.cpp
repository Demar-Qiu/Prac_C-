#include"Tank.h"
#include<iostream>
using namespace std;

/*
静态数据成员与静态成员函数
    要求：定义Tank类，数据成员：编号m_cCode,坦克数量s_iCount
                      成员函数：构造函数，析构函数，fire,getCount
                       
*/

int main()
{
    //cout << Tank::getCount()<< endl; //用类直接调静态成员函数
    //Tank t1('a');
    //cout<< t1.getCount() << endl;

    Tank* p = new Tank('b');
    cout << Tank::getCount() << endl;
    Tank* q = new Tank('c');
    cout << q->getCount() << endl;
    delete p;
    delete q;
    cout<< Tank::getCount() << endl;
    return 0;
}