#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


/****

  map��������

     ���÷º����ı��������

****/


class testCompare
{
public:
	bool operator ()(int v1,int v2)
	{
		return v1 > v2;

	}


};

//����key������Ĭ���Ǵ�С����
void test11()
{
	map<int, double,testCompare>m;
	//map<int, double,greater<int>>m;  //���ɴӴ�С����

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

//ʵ��value����ķº���
typedef pair<int, double>PAIR;
bool CmpByValue(const PAIR& a, const PAIR& b)
{
	return a.second > b.second;
}


//����value������
void test12()
{
	map<int, double>m;

	m.insert(make_pair(1, 12.34));
	m.insert(make_pair(2, 5.66));
	m.insert(make_pair(3, 33.15));
	m.insert(make_pair(4, 20.00));
	m.insert(make_pair(5, 1.50));

	//��map��Ԫ�ش浽vector��,����sort(sortֻ�������Ե�����)
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