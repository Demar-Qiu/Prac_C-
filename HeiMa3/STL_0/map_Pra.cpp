#include<iostream>
#include<map>
#include<string>
using namespace std;


/****
   ����map��ѧϰ��
       map������Ԫ�ض���pair
	   pair�� ��ֵkey��ʵֵvalue������Ԫ�ؼ�ֵkey�Զ�����

	   �ײ��Ƕ�����ʵ��
	   �ŵ�:�ɸ���key�����ҵ�value

	map��multimap����
	     map���������������ظ�keyֵԪ�أ�multimap������

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

	//����
	//m.insert(make_pair(2, 3.432));
	//m[2]=3.432;  //��������룬��Ϊ�������κ�key�ҵ�value���ʺϲ��ң��������׳���

	//printMap(m);

	//m.erase(3);  //����keyɾ��
	//m.clear();
	printMap(m);

	map<int,double>::iterator pos=m.find(4);
	if (pos != m.end())
	{
		cout << "�鵽��-> " << (*pos).first << ": " << (*pos).second << endl;
	}
	else
	{
		cout << "û�鵽" << endl;
	}

	int num = m.count(4);  //map��Ҳ���������ͬ����key
	cout << "num= " << num << endl;



}



int main_03()
{
	test10();

	return 0;
}