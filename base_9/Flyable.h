#pragma once
#include<iostream>


class Flyable    //Ҳ����cpp�ļ���ʵ�ָ���
{
public:
	virtual void takeoff() = 0;    //ֻ�д��麯�������ӿ���
	virtual void land() = 0;
};