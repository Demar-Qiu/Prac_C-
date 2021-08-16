#include<iostream>
#include<string>
#include<set>
using namespace std;


class MyCom
{
public:
	bool operator()(int v1,int v2)  //仿函数本质是个类，但是用作函数方法
	{
		//cout << "A" << endl;
		return v1 > v2;
	}

};

//set容器排序(自定义排序规则）  注意和之前sort()的排序区分
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

	//指定排序规则从大到小，用仿函数

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


//set容器排序，存放自定义类型(需要指定排序规则)
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

//仿函数
class compareDog
{
public:
	bool operator()(const Dog& d1, const Dog& d2)
	{
		//按照年龄排序
		return d1.m_Age > d2.m_Age;
	}

};

void test05()
{
	set<Dog, compareDog>s;

	Dog d1("小乔", 17);
	Dog d2("大乔", 22);
	Dog d3("貂蝉", 20);
	Dog d4("孙尚香", 21);
	Dog d5("黄月英", 24);

	s.insert(d1);
	s.insert(d2);
	s.insert(d3);
	s.insert(d4);
	s.insert(d5);
	for (auto i : s)
	{
		cout << "姓名：" << i.m_Name << "  年龄：" << i.m_Age<< endl;
	}

}


int main_02()
{
	//test04();
	test05();

	return 0;
}