#include<iostream>
#include<stdlib.h>
#include"Soldier.h"

/*
���м̳У� Is a
    1��Person�࣬���ݳ�Ա��m_strName,��Ա���������졢������play()
    2��Soldier�࣬���ݳ�Ա��m_iAge,��Ա���������졢������work()
    3�����庯��test1(Person p) test2(Person &p) test(Person *p)
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
    //Person p=soldier;  //ʹ��soldierȥ��ʼ��p,������ÿ������캯�� 
    //p.play();   //soldier���е�m_strName��ֵ����p���е�m_strName
    
    //Person* p = &soldier;  //ʹ��ָ��ָ��soldier
    //p->play();
    // p->work(); �����ԣ�Person�޷���������������ݳ�Ա���Ա����

   /* Person* p = new Soldier;
    p->play();
    delete p;
    p = NULL*/;    //ʹ�ø����ָ��ȥ�ͷ�������ڴ棬Ҫ��virtual���θ������������

    Person p0;
    Soldier s0;
    //test1(p0); //��ʱʵ�δ����βΣ���ʱ����p������Person���Ĭ�Ͽ������캯����û�ж������Բ���ʾ,ֻ���ͷ��ڴ�ʱ��������������
    //test1(s0);

    //test2(p0);
    //test2(s0);

    test3(&p0);
    test3(&s0);       
     
    // test3��test2�ṹһ������test1�Ĳ�ͬ���ں����ߵ��ù����в�������µ���ʱ�������������ͷ��ڴ棬����Ч�ʸ���    return 0;
}