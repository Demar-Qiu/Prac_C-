#include<iostream>
#include<string>
#include<algorithm>
#include<functional>
using namespace std;
#include<vector>



/***
   STL�����㷨��
       
	    1. �����㷨��for_each

***/

//��ͨ����
void print0(int val)
{
	cout << val << " ";
}
//�º���
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

	for_each(v.begin(), v.end(), print0);  //����ͨ����
	cout << endl;

	for_each(v.begin(), v.end(), print1());   //�÷º���
	cout << endl;
}


/*  2.�����㷨��transform  �������� */
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
	vector<int>v1; //ԭ����
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	vector<int>v2;  //Ŀ������
	v2.resize(v1.size()); // �����˿ռ䲢��ʼ����Ԫ�أ���ֱ�ӷ���

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