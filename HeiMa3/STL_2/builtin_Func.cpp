#include<functional>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


/**
    内建函数对象：
	    STL内建了一些函数对象，例如算术仿函数、关系仿函数、逻辑仿函数
		记得引入头文件#include<functional>

**/

 
//1. 算术仿函数
//   negate 一元仿函数  取反
void test20()
{
	negate<int>n;

	cout << n(50) << endl;

}

//plus 二元仿函数  加法
void test21()
{
	plus<int>p;
	cout << p(12, 21) << endl;

}


//2. 关系仿函数
//   大于 greater
void test22()
{
	vector<int>v;
	v.push_back(4);
	v.push_back(2);
	v.push_back(5);
	v.push_back(7);
	v.push_back(1);

	//降序
	sort(v.begin(), v.end(), greater<int>());// 相当于之前自己写的MyCompare

	for (auto &i : v)
	{
		cout << i << " ";
	}
	cout << endl;

}

//3. 逻辑仿函数
void test23()
{
	vector<bool>v;

	v.push_back(false);
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);

	for (auto i : v)
	{
		cout << i << " ";
	}
	cout << endl;

	vector<bool>v2;
	v2.resize(v.size());
	//逻辑非，取反操作
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());

	for (auto i : v2)
	{
		cout << i << " ";
	}
	cout << endl;

}


int main()
{
	//test21();
	//test22();
	test23();

	return 0;
}