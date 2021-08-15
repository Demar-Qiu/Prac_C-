#include<iostream>
#include<map>
#include<string>
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

void test11()
{
	map<int, double,testCompare>m;

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



int main_04()
{
	test11();


	return 0;
}