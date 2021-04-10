#pragma once
#include<iostream>


class Flyable    //也无需cpp文件来实现该类
{
public:
	virtual void takeoff() = 0;    //只有纯虚函数，即接口类
	virtual void land() = 0;
};