#include<iostream>
using namespace std;


class Animal
{
public:
	Animal(int age)  //���������ʵ����Animal* this
	{
		m_Age = age;  //�൱��this->m_Age = age
	}
	void fun()      //�������������Animal* this
	{
		m_Age = 18;    
	}

	Animal& AnimalAddAge(Animal &a)
	{
		this->m_Age += a.m_Age;
		return *this;    //���ص��Ƕ���������������ã��򷵻ص�����һ����ʱ����
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
	cout << "a1�����䣺" << a1.m_Age<< endl ;

	Animal a2(10);
	Animal a3(10); 
	a3.AnimalAddAge(a2).AnimalAddAge(a2);  //��ʽ���˼��
	cout << "a3������Ϊ��" <<a3.m_Age<< endl;

	Animal* a4 = NULL;
	a4->showClassName();  //����ok
	a4->showPersonAge(); //���г��������ں����ݳ�Ա����this����Ϊ�գ����ʳ���

	return 0;
}



