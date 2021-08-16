#include<iostream>
#include<vector>
#include<string>
using namespace std;



/***

  函数对象（仿函数）:重载函数调用操作符的类，其实例化对象称为函数对象；
            函数对象使用重载的()时，行为类似函数调用 所以也叫仿函数；
            本质是一个类。
   特点：
	  1.在使用时，可以像普通函数那样调用，可以有参数和返回值
	  2.函数对象超出普通函数的概念，函数对象可以有自己的状态
	  3.函数对象可以作为参数传递

***/


// 1. 在使用时，可以像普通函数那样调用，可以有参数和返回值
class MyAdd
{

public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}

};

void test00()
{
	MyAdd myadd;  //为函数对象
	cout<<myadd(10, 10)<<endl; //就和普通函数调用一样


}

// 2.函数对象超出普通函数的概念，函数对象可以有自己的状态
class MyPrint
{
public:
	MyPrint()
	{
		count = 0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		this->count++;
	}

	int count;  //内部记录自己的状态

};
//如果是普通函数要知道它调用多少次，需要创建全局/静态变量来统计保存，不能在内部实现

void test01()
{
	MyPrint myprint;
	myprint("hello,world");
	myprint("hello,world");
	myprint("hello,world");
	myprint("hello,world");
	cout << "MyPrint调用的次数: " << myprint.count << endl;

}


// 3.函数对象可以作为参数传递（可见仿函数的灵活）
void doPrint(MyPrint &mp, string test)
{
	mp(test);
}
void test02()
{
	MyPrint myPrint;
	doPrint(myPrint,"Hello,c++"); //函数对象作为doPrint函数参数
	//间接利用了MyPrint仿函数的打印功能

}




int main_00()
{
	//test00();
	//test01();
	test02();

	return 0;
}
