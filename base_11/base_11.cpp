#include<iostream>
#include"IndexException.h"
using namespace std;

/*
  �쳣����
     1������һ��Exception�࣬��Ա����printException������
	 2������һ��IndexException�࣬��Ա������printException

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
	//	cout << "exception" << endl;   //˵���׳���10�ܱ�����
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