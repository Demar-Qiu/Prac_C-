#include<iostream>
#include<stdlib.h>
#include"MigrantWorker.h"

/*
��̳� 
   1��Farmer�࣬���ݳ�Ա��m_strName,��Ա���������졢������sow()
   2��Worker�࣬���ݳ�Ա��m_strCode,��Ա���������졢������carry()
   3��MigrantWorker�࣬���ݳ�Ա���ޣ���Ա���������������
*/


int main()
{
	MigrantWorker*p = new MigrantWorker("Geroge", "032");
	p->carry();
	p->sow();
	delete p;
	p = NULL;


	return 0;
}