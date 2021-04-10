#include"Dustman.h"
#include<iostream>
using namespace std;
Dustman::Dustman(string name,int age):Worker(name,age)
{

}

void Dustman::work()       //纯虚函数在该类中得到实现    
{
	cout << "扫地" << endl;
}