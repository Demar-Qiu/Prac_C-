#include<iostream>
#include<string>
using namespace std;


class Man
{
public:
	//传统初始化方法
	Man(int a, int b, int c)
	{
		m_A = a;
		m_B = b;
		m_C = c;
	}

	//初始化列表
	//Man() :m_A(10),m_B(20),m_C(30)
	//{
	//	
	//}

	//Man(int a, int b, int c) :m_A(a), m_B(b), m_C(c)
	//{
	//	
	//}

	int m_A;
	int m_B;
	int m_C;

};


//初始化列表使用的必须情况，如未有默认构造函数（只有有参构造）
class People
{
public:
	//People(Man &m)
	//{
	//	m_Man = m;   //此时无法初始化，会报错
	//}

	People(Man &m) :m_Man(m)   //只能用初始化列表
	{
	}

public:
	Man m_Man;  //类对象作为类的数据成员

};



void test04()
{
	Man m(10, 20, 30);
	cout << "m_A= " << m.m_A << endl;
	cout << "m_B= " << m.m_B << endl;
	cout << "m_C= " << m.m_C << endl;
}


int main_7()
{
	test04();
	return 0;
}

//类对象作为数据成员   //注意对象构造和释放的顺序，遵循先进后出原则
class Phone
{
public:
	Phone(string pName)
	{
		m_PName = pName;
		cout << "Phone的构造函数调用" << endl;
	}
	~Phone()
	{
		cout << "Phone的析构函数的调用" << endl;
	}

	string m_PName;
};

class Family
{

public:
	Family(string name, string pName):m_Name(name),m_Phone(pName)
	{
		cout << "Family的构造函数调用" << endl;
	}
	~Family()
	{
		cout << "Family的析构函数的调用" << endl;
	}

	string m_Name;
	Phone m_Phone;
};


int main_8()
{
	Family f("张杰", "苹果");
	cout << f.m_Name << " take a " << f.m_Phone.m_PName << endl;
	return 0;
}