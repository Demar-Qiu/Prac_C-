#include<iostream>
using namespace std;


class Animal
{
public:
	Animal(int age)  //里面参数其实还有Animal* this
	{
		m_Age = age;  //相当于this->m_Age = age
	}
	void fun()      //里面参数隐藏了Animal* this
	{
		m_Age = 18;    
	}

	Animal& AnimalAddAge(Animal &a)
	{
		this->m_Age += a.m_Age;
		return *this;    //返回的是对象本身（如果不是引用，则返回的是另一个临时对象）
	}

	void showClassName()
	{
		cout << "this is a Class" << endl;
	}
	void showPersonAge()
	{
		if (this == NULL)
		{
			return;
		}
		cout << "age= " << m_Age << endl;
	}

public:
	int m_Age;
};

int main_10()
{
	Animal a1(18);
	cout << "a1的年龄：" << a1.m_Age<< endl ;

	Animal a2(10);
	Animal a3(10); 
	a3.AnimalAddAge(a2).AnimalAddAge(a2);  //链式编程思想
	cout << "a3的年龄为：" <<a3.m_Age<< endl;

	Animal* a4 = NULL;
	a4->showClassName();  //运行ok
	a4->showPersonAge(); //运行出错，函数内含数据成员，而this本身为空，访问出错

	return 0;
}



