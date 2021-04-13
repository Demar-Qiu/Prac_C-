#include"Coordinate.h"
#include<iostream>
using namespace std;


/* 二元运算符重载
*   要求：定义Coordinate坐标类
*         成员函数：构造，getX,getY
*         数据成员：m_iX,m_iY
     1、+号运算符重载；（成员函数和友元函数重载）
     2、<<输出运算符重载（友元函数重载）
     3、[]索引运算符重载（非友元函数重载）
*/

int main()
{
    Coordinate coor1(1, 3);
    Coordinate coor2(2, 4);
    Coordinate coor3(0, 0);
    
    coor3 = coor1 + coor2;   //+运算符的重载

    //cout << coor3.getX() << "," << coor3.getY() << endl;
    cout << coor3 << endl;  // 输出<<运算符重载
    cout << coor3[0] << endl; //索引运算符[]重载
    cout << coor3[1] << endl;

    return 0;
}