#include<iostream>
#include<string>
using namespace std;

//类模板
template<typename NameType,typename AgeType>
class Person
{
public:
	Person(NameType name,AgeType age)
	{
		m_Name = name;
		m_Age = age;
	}

	void display()
	{
		cout <<"姓名： "<< m_Name << endl;
		cout << "年龄： " << m_Age << endl;

	}

	NameType m_Name;
	AgeType m_Age;
};

//类模板对象做函数参数(以下几种方式)
void printPerson(Person<string, int>&p)//直接显示数据类型(主要用这个)
{
	p.display();
}

template<class T1,class T2>
void printPerson2(Person<T1, T2>&p) //参数模板化
{
	p.display();
	cout << "T1类型为：" << typeid(T1).name() << endl;
	cout << "T2类型为：" << typeid(T2).name() << endl;
}

template<class T>
void printPerson3(T &p) //整个类模板化
{
	p.display();
}

class People1
{
public:
	void showPeople1()
	{
		cout << "People1 show" << endl;
	}
};


class People2
{
public:
	void showPeople2()
	{
		cout<< "People2 show" << endl;
	}

};



//类模板中成员函数在调用时才创建,并不是一开始就创建
template<class T>
class MyClass
{
public:
	T obj;

	void func1()
	{
		obj.showPeople1();
	}

	void func2()
	{
		obj.showPeople2();
	}

};

void test06()
{
	MyClass<People1>m;
	m.func1();
	//m.func2();
}


int main_2()
{
	//类模板只能显示指定类型，不能自动类型推导
	Person<string, int>p1("sunwu",99); 
	Person<string, int>p2("zhuba", 88);
	Person<string, int>p3("tangsen", 35);
	//p1.dispay();

	printPerson(p1);
	printPerson2(p2);
	printPerson3(p3);

	test06();


		
	return 0;
}
