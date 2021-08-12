#include<iostream>
#include<set>
using namespace std;

/*

 ����Ԫ�ض������Ԫ�صļ�ֵ�Զ�����setԪ�صļ�ֵ����ʵֵ��ʵֵ���Ǽ�ֵ��
 set����������Ԫ������ͬ�ļ�ֵ��
 ��set��Ԫ�ز���map��������ͬʱӵ��ʵֵ(value)�ͼ�ֵ(key)����

*/
//set�����Ĺ���͸�ֵ

void printSet(set<int>&s)
{
	for (auto &i : s)
	{
		cout << i << " ";
	}
	cout << endl;

}

void test01()
{
	set<int>s1;

	s1.insert(10);  //ע��set�Ĳ�����insert
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	//set��������Ԫ���Զ����򣬲���������ظ���ֵ 
	printSet(s1);

	set<int>s2(s1);
	printSet(s2);

	if (s1.empty())
	{
		cout << "Ϊ��" << endl;
	}
	else
	{
		cout << "��С: " << s1.size() << endl; //û��resize
	}

	//s2.erase(s2.begin());
	//s2.erase(30);
	//printSet(s2); 
	set<int>::iterator pos = s2.find(20);
	if (pos != s2.end())
	{
		cout << "�ҵ�Ԫ�أ� " << *pos << endl;
	}
	else
	{
		cout<< "δ�ҵ�Ԫ��"<< endl;
	}

	int num = s2.count(30);   //����set����ֻ����0��1���������ظ���
	cout << "num= " << num << endl;

}

//set������multiset����������
void test02()
{
	set<int>s;

	pair<set<int>::iterator, bool>ret = s.insert(10); //���ص��Ǹ�pair����

	if (ret.second)  //��Ϊ��
	{
		cout << "��һ�β���ɹ�" << endl;
	}
	else
	{
		cout << "��һ�β���ʧ��" << endl;
	}

	ret = s.insert(10);   
	//�ڶ��β���ʧ�ܣ�����set�ǲ����ظ��ģ�multiset����
	if (ret.second)  //��Ϊ��
	{
		cout << "�ڶ��β���ɹ�" << endl;
	}
	else
	{
		cout << "�ڶ��β���ʧ��" << endl;
	}
}




int main_00()
{
	//test01();
	test02();
	return 0;
}