#include<iostream>
#include<string>
using namespace std;




//交换两个整型
void swapInt(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;

}

//交换两个浮点型
void swapDouble(double &a, double &b)
{
	double temp = a;
	a = b;
	b = temp;

}

void test01()
{
	int a = 10;
	int b = 20;
	swapInt(a, b);
	cout << "a= " <<a<< " " << "b= " << b << endl;

	double c = 1.1;
	double d = 2.2;
	swapDouble(c, d);
	cout << "c= " << c << " " << "d= " << d << endl;
}

template<typename T>
void Myswap(T &a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test02()
{
	int a = 10;
	int b = 12;
	Myswap(a, b);  //自动类型转换
	cout << "a= " << a << " " << "b= " << b << endl;

	Myswap<int>(a,b);
	cout << "a= " << a << " " << "b= " << b << endl;
}

//普通函数与函数模板调用
void myPrint(int a, int b)
{
	cout << "调用的普通函数" << endl;
}

template<class T>
void myPrint(T a, T b)
{
	cout << "调用的模板" << endl;
}


void test03()
{
	int a = 10;
	int b = 20;

	//myPrint(a, b);

	//通过空模板参数列表，强制调用函数模板
	myPrint<>(a,b);
}


int main_0()
{ 
	//test02();

	test03();
	return 0;
}

 