#include"Coordinate.h"
#include<iostream>
using namespace std;

/*  ��������� ---- һԪ���������
*   ����Coordinate������
*       ��Ա���������캯����getX��getY
*       ���ݳ�Ա��m_iX,m_iY
*    1.������������أ���Ա�������غ���Ԫ�������أ�
*    2.++��������أ�ǰ��++������++��
*/

int main()
{
	Coordinate coor1(1, 3);
	cout << coor1.getX() << "," << coor1.getY() << endl;
	-coor1;   //������������أ��൱���� coor1.operator-()
	cout << coor1.getX() << "," << coor1.getY() << endl;

	++coor1;
	cout << coor1.getX() << "," << coor1.getY() << endl;

	cout << (coor1++).getX() << ",";
	cout << (coor1++).getY() << endl;  
	cout << coor1.getX() << "," << coor1.getY() << endl;  //��֤����++

	return 0;
}