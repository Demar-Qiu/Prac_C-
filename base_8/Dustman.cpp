#include"Dustman.h"
#include<iostream>
using namespace std;
Dustman::Dustman(string name,int age):Worker(name,age)
{

}

void Dustman::work()       //���麯���ڸ����еõ�ʵ��    
{
	cout << "ɨ��" << endl;
}