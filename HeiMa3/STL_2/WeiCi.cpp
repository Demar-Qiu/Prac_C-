#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


/**

ν�ʣ�predicate����
     ����bool���͵ķº�����Ϊν�ʡ�

	1.���operator()����һ�������������һԪν��
	2.���operator()���ܶ����������������Ԫν��

**/


//һԪν��
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
	//���������� ��û�д���5������
	//GreaterFive()������������ 
	vector<int>::iterator it=find_if(v.begin(), v.end(), GreaterFive());//ע�����ﴫ����Ǹ�������֮ǰ����ģ���е�������
	if (it == v.end())
	{
		cout << "δ�ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ��ˣ�����5������Ϊ��" << *it << endl;
	}

}


//��Ԫν��
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

	//ʹ�ú������� ���ı��㷨���ԣ����������Ϊ�Ӵ�С
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
