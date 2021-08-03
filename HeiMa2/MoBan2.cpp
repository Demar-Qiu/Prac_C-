#include<iostream>
#include<string>
using namespace std;

//��ģ��
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
		cout <<"������ "<< m_Name << endl;
		cout << "���䣺 " << m_Age << endl;

	}

	NameType m_Name;
	AgeType m_Age;
};

//��ģ���������������(���¼��ַ�ʽ)
void printPerson(Person<string, int>&p)//ֱ����ʾ��������(��Ҫ�����)
{
	p.display();
}

template<class T1,class T2>
void printPerson2(Person<T1, T2>&p) //����ģ�廯
{
	p.display();
	cout << "T1����Ϊ��" << typeid(T1).name() << endl;
	cout << "T2����Ϊ��" << typeid(T2).name() << endl;
}

template<class T>
void printPerson3(T &p) //������ģ�廯
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



//��ģ���г�Ա�����ڵ���ʱ�Ŵ���,������һ��ʼ�ʹ���
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
	//��ģ��ֻ����ʾָ�����ͣ������Զ������Ƶ�
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
