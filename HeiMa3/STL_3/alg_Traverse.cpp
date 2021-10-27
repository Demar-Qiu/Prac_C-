#include<iostream>
#include<string>
#include<algorithm>
#include<functional>
using namespace std;
#include<vector>



/***
   STL常用算法：
       
	    1. 遍历算法：for_each

***/

//普通函数
void print0(int val)
{
	cout << val << " ";
}
//仿函数
class print1
{
public:
	void operator()(int val)
	{
		cout << val << " ";

	}

};


void test00()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	for_each(v.begin(), v.end(), print0);  //用普通函数
	cout << endl;

	for_each(v.begin(), v.end(), print1());   //用仿函数
	cout << endl;
}


/*  2.遍历算法：transform  搬运容器 */
class Transform
{
public:
	int operator()(int v)
	{
		return v+100;
	}

};

void test01()
{
	vector<int>v1; //原容器
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	vector<int>v2;  //目标容器
	v2.resize(v1.size()); // 开辟了空间并初始化了元素，可直接访问

	transform(v1.begin(), v1.end(), v2.begin(), Transform());
	for_each(v2.begin(), v2.end(), print1());
	cout << endl;

}



int main_00()
{

	//test00();
	test01();


	return 0;
}