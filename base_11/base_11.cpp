#include<iostream>
#include"IndexException.h"
using namespace std;

/*
  异常处理：
     1、定义一个Exception类，成员函数printException，析构
	 2、定义一个IndexException类，成员函数：printException

*/

void test()
{
	throw IndexException();
}


int main()
{
	try
	{
		test();
	}
	//catch (int)
	//{
	//	cout << "exception" << endl;   //说明抛出的10能被捕获到
	//} 
	//catch (double &e)
	//{
	//	cout << e<< endl;
	//}

	//catch(...)
	//catch(Exception&e)
	catch (IndexException &e)
	{
		e.printException();
	}

	return 0;
}