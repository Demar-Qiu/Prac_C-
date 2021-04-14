#include<iostream>
#include<stdlib.h>
#include<string>
#include<vector>
#include<list>
#include<map>
using namespace std;

/*
   通过使用STL标准模板库，学习其基本用法
*/
/***************************************************/


int main()
{

	// 关于vector
	vector<int>vec;
	vec.push_back(3);  //插入
	vec.push_back(5);
	vec.push_back(7);
	//vec.pop_back();  //删除
	//cout << vec.size() << endl;  

	// 遍历方法
	//for (int i = 0; i < vec.size(); i++)
	//{
	//	cout << vec[i] << endl;
	//}

	//用迭代器实现遍历
	vector<int>::iterator itor = vec.begin();
	for (; itor != vec.end(); itor++) 
	{
		cout << *itor << endl;
	}
	//cout << vec.front() << endl;
	//cout << vec.back() << endl;


	//关于list链表
	list<int>list1;
	list1.push_back(4);
	list1.push_back(6);
	list1.push_back(8);
	//链表中无法通过[]访问元素，要用迭代器访问
	//for (int i = 0; i < list1.size(); i++)
	//{
	//	cout << list1[i] << endl;
	//}

	list<int>::iterator ittr = list1.begin();
	for (; ittr != list1.end(); ittr++)
	{
		cout << *ittr << endl;
	}


	//关于map映射
	map<int, string>m;
	pair<int, string>p1(3,"hello"); //用pair保存p1
	pair<int, string>p2(6, "world");
	m.insert(p1);
	m.insert(p2);
	cout << m[3] << endl;
	cout << m[6] << endl;

	map<int, string>::iterator itmr = m.begin();
	for (; itmr != m.end(); itmr++)
	{
		cout << itmr->first << endl; //输出键
		cout << itmr->second << endl; //输出值
	
	}



	return 0;
}

