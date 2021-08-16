#include<iostream>
#include<string>
using namespace std;


//简单学习对组pair
//可以返回两个数据

void test03()
{
	//创建对组方式一
	pair<string, int>p("Tom", 25);
	cout << "姓名：" << p.first << "  年龄：" << p.second << endl;

	//方式二
	pair<string, int>r = make_pair("Jerry", 18);
	cout << "姓名：" << r.first << "  年龄：" << r.second << endl;

}


int main_01()
{
	test03();

	return 0;
}