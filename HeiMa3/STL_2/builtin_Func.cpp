#include<functional>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


/**
    �ڽ���������
	    STL�ڽ���һЩ�����������������º�������ϵ�º������߼��º���
		�ǵ�����ͷ�ļ�#include<functional>

**/

 
//1. �����º���
//   negate һԪ�º���  ȡ��
void test20()
{
	negate<int>n;

	cout << n(50) << endl;

}

//plus ��Ԫ�º���  �ӷ�
void test21()
{
	plus<int>p;
	cout << p(12, 21) << endl;

}


//2. ��ϵ�º���
//   ���� greater
void test22()
{
	vector<int>v;
	v.push_back(4);
	v.push_back(2);
	v.push_back(5);
	v.push_back(7);
	v.push_back(1);

	//����
	sort(v.begin(), v.end(), greater<int>());// �൱��֮ǰ�Լ�д��MyCompare

	for (auto &i : v)
	{
		cout << i << " ";
	}
	cout << endl;

}

//3. �߼��º���
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
	//�߼��ǣ�ȡ������
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