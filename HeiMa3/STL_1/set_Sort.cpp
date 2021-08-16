#include<iostream>
#include<string>
#include<set>
using namespace std;


class MyCom
{
public:
	bool operator()(int v1,int v2)  //�º��������Ǹ��࣬����������������
	{
		//cout << "A" << endl;
		return v1 > v2;
	}

};

//set��������(�Զ����������  ע���֮ǰsort()����������
void test04()
{
	set<int>s1;
	s1.insert(11);
	s1.insert(44);
	s1.insert(33);
	s1.insert(22);
	s1.insert(55);
	s1.insert(66);

	for (auto i : s1)
	{
		cout << i <<" ";
	}
	cout << endl;

	//ָ���������Ӵ�С���÷º���

	set<int,MyCom>s2;

	s2.insert(11);
	s2.insert(44);
	s2.insert(33);
	s2.insert(22);
	s2.insert(55);
	s2.insert(66);

	for (auto j : s2)
	{
		cout << j << " ";
	}
	cout << endl;

}


//set�������򣬴���Զ�������(��Ҫָ���������)
class Dog
{
public:
	Dog(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}

	string m_Name;
	int m_Age; 

};

//�º���
class compareDog
{
public:
	bool operator()(const Dog& d1, const Dog& d2)
	{
		//������������
		return d1.m_Age > d2.m_Age;
	}

};

void test05()
{
	set<Dog, compareDog>s;

	Dog d1("С��", 17);
	Dog d2("����", 22);
	Dog d3("����", 20);
	Dog d4("������", 21);
	Dog d5("����Ӣ", 24);

	s.insert(d1);
	s.insert(d2);
	s.insert(d3);
	s.insert(d4);
	s.insert(d5);
	for (auto i : s)
	{
		cout << "������" << i.m_Name << "  ���䣺" << i.m_Age<< endl;
	}

}


int main_02()
{
	//test04();
	test05();

	return 0;
}