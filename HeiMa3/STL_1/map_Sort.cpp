#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


/****

  map容器排序：

     利用仿函数改变排序规则

****/


class testCompare
{
public:
	bool operator ()(int v1,int v2)
	{
		return v1 > v2;

	}


};

//按照key来排序（默认是从小到大）
void test11()
{
	map<int, double,testCompare>m;
	//map<int, double,greater<int>>m;  //都可从大到小降序

	m.insert(make_pair(1, 12.34)); 
	m.insert(make_pair(2,5.66));
	m.insert(make_pair(3,33.15));
	m.insert(make_pair(4,20.00));
	m.insert(make_pair(5,1.50));

	for (map<int, double>::iterator it = m.begin(); it!=m.end();++it)
	{
		cout << "key= " << it->first << " " << "value= " << it->second << endl;

	}
}

//实现value降序的仿函数
typedef pair<int, double>PAIR;
bool CmpByValue(const PAIR& a, const PAIR& b)
{
	return a.second > b.second;
}


//按照value来排序
void test12()
{
	map<int, double>m;

	m.insert(make_pair(1, 12.34));
	m.insert(make_pair(2, 5.66));
	m.insert(make_pair(3, 33.15));
	m.insert(make_pair(4, 20.00));
	m.insert(make_pair(5, 1.50));

	//把map中元素存到vector中,再用sort(sort只能排线性的容器)
	vector<PAIR>v0(m.begin(), m.end());
	sort(v0.begin(), v0.end(),CmpByValue);
	for (auto it : v0)
	{
		cout << "key= " << it.first << " " << "value= " << it.second << endl;

	}

}


int main()
{
	//test11();
	test12();

	return 0;
}