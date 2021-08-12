#include<iostream>
#include<set>
using namespace std;

/*

 所有元素都会根据元素的键值自动排序，set元素的键值就是实值，实值就是键值；
 set不允许两个元素有相同的键值；
 （set的元素不像map那样可以同时拥有实值(value)和键值(key)）。

*/
//set容器的构造和赋值

void printSet(set<int>&s)
{
	for (auto &i : s)
	{
		cout << i << " ";
	}
	cout << endl;

}

void test01()
{
	set<int>s1;

	s1.insert(10);  //注意set的插入是insert
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	//set容器所有元素自动排序，不允许插入重复的值 
	printSet(s1);

	set<int>s2(s1);
	printSet(s2);

	if (s1.empty())
	{
		cout << "为空" << endl;
	}
	else
	{
		cout << "大小: " << s1.size() << endl; //没有resize
	}

	//s2.erase(s2.begin());
	//s2.erase(30);
	//printSet(s2); 
	set<int>::iterator pos = s2.find(20);
	if (pos != s2.end())
	{
		cout << "找到元素： " << *pos << endl;
	}
	else
	{
		cout<< "未找到元素"<< endl;
	}

	int num = s2.count(30);   //对于set而已只能是0或1（不允许重复）
	cout << "num= " << num << endl;

}

//set容器和multiset容器的区别
void test02()
{
	set<int>s;

	pair<set<int>::iterator, bool>ret = s.insert(10); //返回的是个pair对组

	if (ret.second)  //若为真
	{
		cout << "第一次插入成功" << endl;
	}
	else
	{
		cout << "第一次插入失败" << endl;
	}

	ret = s.insert(10);   
	//第二次插入失败，所以set是不可重复的，multiset可以
	if (ret.second)  //若为真
	{
		cout << "第二次插入成功" << endl;
	}
	else
	{
		cout << "第二次插入失败" << endl;
	}
}




int main_00()
{
	//test01();
	test02();
	return 0;
}