#include<iostream>
#include<stdlib.h>
#include"MigrantWorker.h"

/*
��̳�
    1��Farmer��,���ݳ�Ա��m_strCode,��Ա���������졢������sow()
    2��Worker�࣬���ݳ�Ա��m_strCode,��Ա���������졢������carry()
    3��MigrantWorker�࣬���ݳ�Ա���ޣ���Ա���������졢����
    4��Person�࣬���ݳ�Ա��m_strColor,��Ա���������졢������printColor()
*/


int main()
{
    MigrantWorker* p = new MigrantWorker("Mike", "017", "yellow");
    p->carry();
    p->sow();
    //p->printColor();
    p->Farmer::printColor();
    p->Worker::printColor();    //��ʱũ�񹤶�����������Person����ͬ�����ݳ�Ա��һ������Farmer,һ������Worker��
    /* Ҫ������������ֻ��Person�е�һ�� ����̳�*/
    //ʹ����̳�ʱ��Ȼ�����ظ�������㸸��Ĺ��캯��������������
    //������ֻ��ʹ����㸸��Ĭ��ֵ�����޷��������л�ô����ֵ

    delete p;
    p = NULL;


    return 0;
}