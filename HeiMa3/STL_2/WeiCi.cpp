#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


/**

谓词（predicate）：
     返回bool类型的仿函数称为谓词。

	1.如果operator()接受一个参数，则叫做一元谓词
	2.如果operator()接受二个参数，则叫做二元谓词

**/


//一元谓词
class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}

};

void test10()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//查找容器中 有没有大于5的数字
	//GreaterFive()匿名函数对象 
	vector<int>::iterator it=find_if(v.begin(), v.end(), GreaterFive());//注意这里传入的是个对象，与之前容器模板中的类区分
	if (it == v.end())
	{
		cout << "未找到" << endl;
	}
	else
	{
		cout << "找到了，大于5的数字为：" << *it << endl;
	}

}


//二元谓词
class MyCompare
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}

};


void test11()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	v.push_back(60);
	v.push_back(40);

	sort(v.begin(), v.end());
	for (auto &i : v)
	{
		cout << i << endl;

	}

	//使用函数对象 来改变算法策略，改排序规则为从大到小
	sort(v.begin(), v.end(), MyCompare()); 
	cout << "---------------------" << endl;
	for (auto &i : v)
	{
		cout << i << endl;

	}
}




int main_01()
{
	//test10();
	test11();


	return 0;
}
