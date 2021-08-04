#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>


void myPrint(int val)
{
	cout << val << endl;
}

void test00()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//通过迭代器访问数据
	vector<int>::iterator itBeg = v.begin(); //起始迭代器，指向容器中第一个元素
	vector<int>::iterator itEnd = v.end(); //结束迭代器。指向容器中最后一个元素的下一位置

	//遍历方式一
	//while (itBeg != itEnd)
	//{
	//	cout << *itBeg << endl;
	//	itBeg++;
	//}

	//遍历方式二
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << endl;
	}
	
	//遍历方式三
	for_each(v.begin(), v.end(), myPrint);
}

//vector存放自定义数据类型
class Person
{
public:
	Person(string name, int age) {
		mName = name;
		mAge = age;
	}
public:
	string mName;
	int mAge;
		
};


void test01()
{
	vector<Person>vv;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	vv.push_back(p1);
	vv.push_back(p2);
	vv.push_back(p3);
	vv.push_back(p4);
	vv.push_back(p5);
	
	for (vector<Person>::iterator i = vv.begin(); i != vv.end(); ++i)
	{
		cout << "姓名： " << (*i).mName << " " <<"年龄："<<(*i).mAge <<endl;
		//或者i->mName;  i->mAge;
		
	}
	//for (auto i : vv)
	//{
	//	cout << "姓名： " << i.mName<< " " << "年龄：" << i.mAge << endl;
	//}

}

//vector存放自定义数据类型 指针
void test02()
{
	vector<Person*>vv;  //此时数据类型是指向Person类型的指针
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	vv.push_back(&p1);
	vv.push_back(&p2);
	vv.push_back(&p3);
	vv.push_back(&p4);
	vv.push_back(&p5);

	for (vector<Person*>::iterator i = vv.begin(); i != vv.end(); ++i)
	{
		cout << "姓名： " << (*i)->mName << " " << "年龄：" << (*i)->mAge << endl;
		//或者i->mName;  i->mAge;

	}

}

//二维数组vector
void test03()
{
	vector<vector<int>>vvv;
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;

	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}

	vvv.push_back(v1);
	vvv.push_back(v2);
	vvv.push_back(v3);
	vvv.push_back(v4);

	for (vector<vector<int>>::iterator vit = vvv.begin(); vit != vvv.end(); ++vit)
	{
		for (vector<int>::iterator vvit = (*vit).begin();vvit != (*vit).end(); ++vvit)
		{
			cout <<*vvit << " ";
		}
		cout << endl;

	}


}




int main_00()
{
	test00();
	test01();
	test02();
	test03();

	return 0;
}