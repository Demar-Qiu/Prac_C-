#include<iostream>
#include<map>
#include<string>
using namespace std;


/****
   关于map的学习：
       map中所有元素都是pair
	   pair中 键值key：实值value，根据元素键值key自动排序

	   底层是二叉树实现
	   优点:可根据key快速找到value

	map和multimap区别：
	     map不允许容器中有重复key值元素，multimap中允许。

***/


void printMap(map<int, double>&m)
{
	for (auto &i : m)
	{
		cout << i.first << ": " << i.second << endl;
	}

}

void test10()
{
	map<int, double>m;

	m.insert(pair<int, double>(1, 2.33));
	m.insert(pair<int, double>(2, 3.44));
	m.insert(pair<int, double>(3, 4.55));
	m.insert(pair<int, double>(4, 5.66));
	//m.insert(pair<int, double>(4, 6.77));

	//或者
	//m.insert(make_pair(2, 3.432));
	//m[2]=3.432;  //不建议插入，因为可以用任何key找到value，适合查找，插入容易出错

	//printMap(m);

	//m.erase(3);  //按照key删除
	//m.clear();
	printMap(m);

	map<int,double>::iterator pos=m.find(4);
	if (pos != m.end())
	{
		cout << "查到了-> " << (*pos).first << ": " << (*pos).second << endl;
	}
	else
	{
		cout << "没查到" << endl;
	}

	int num = m.count(4);  //map中也不允许插入同样的key
	cout << "num= " << num << endl;



}



int main_03()
{
	test10();

	return 0;
}