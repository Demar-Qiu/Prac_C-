#include"Coordinate.h"
#include<iostream>
using namespace std;


/* ��Ԫ���������
*   Ҫ�󣺶���Coordinate������
*         ��Ա���������죬getX,getY
*         ���ݳ�Ա��m_iX,m_iY
     1��+����������أ�����Ա��������Ԫ�������أ�
     2��<<�����������أ���Ԫ�������أ�
     3��[]������������أ�����Ԫ�������أ�
*/

int main()
{
    Coordinate coor1(1, 3);
    Coordinate coor2(2, 4);
    Coordinate coor3(0, 0);
    
    coor3 = coor1 + coor2;   //+�����������

    //cout << coor3.getX() << "," << coor3.getY() << endl;
    cout << coor3 << endl;  // ���<<���������
    cout << coor3[0] << endl; //���������[]����
    cout << coor3[1] << endl;

    return 0;
}