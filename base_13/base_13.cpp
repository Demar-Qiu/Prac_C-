#include"Tank.h"
#include<iostream>
using namespace std;

/*
��̬���ݳ�Ա�뾲̬��Ա����
    Ҫ�󣺶���Tank�࣬���ݳ�Ա�����m_cCode,̹������s_iCount
                      ��Ա���������캯��������������fire,getCount
                       
*/

int main()
{
    //cout << Tank::getCount()<< endl; //����ֱ�ӵ���̬��Ա����
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