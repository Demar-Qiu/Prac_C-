#include<iostream>
#include<stdlib.h>
#include"Soldier.h"
#include"Infantry.h"
/*
�����̳к�˽�м̳�
   Ҫ��1��Person�࣬���ݳ�Ա��m_strName,��Ա���������졢play()
         2��Soldier��,���ݳ�Ա��m_iAge,��Ա���������졢work()
		 3��Infantry�����࣬��Ա������attack()
*/

int main()
{
	//Soldier soldier;
	//soldier.work();
	//soldier.play();   // �����̳�ʱ������������ܷ��ʻ�����κγ�Ա

	Infantry soldier;
	soldier.attack();  //������Ĺ��г�Ա�������Է���Person�м̳����ı�����Ա��˵��Person�еı�����Ա�������̳е���Soldier����
	                  // ��Soldier˽�м̳�Person,������ĳ�Ա�������ɷ���Person�����ݳ�Ա
	
	Soldier so;
	so.play();
	so.Person::play();
	
	return 0;
}