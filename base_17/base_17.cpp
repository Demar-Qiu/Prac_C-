#include<iostream>
#include<stdlib.h>
#include<string>
#include<vector>
#include<list>
#include<map>
using namespace std;

/*
   ͨ��ʹ��STL��׼ģ��⣬ѧϰ������÷�
*/
/***************************************************/


int main()
{

	// ����vector
	vector<int>vec;
	vec.push_back(3);  //����
	vec.push_back(5);
	vec.push_back(7);
	//vec.pop_back();  //ɾ��
	//cout << vec.size() << endl;  

	// ��������
	//for (int i = 0; i < vec.size(); i++)
	//{
	//	cout << vec[i] << endl;
	//}

	//�õ�����ʵ�ֱ���
	vector<int>::iterator itor = vec.begin();
	for (; itor != vec.end(); itor++) 
	{
		cout << *itor << endl;
	}
	//cout << vec.front() << endl;
	//cout << vec.back() << endl;


	//����list����
	list<int>list1;
	list1.push_back(4);
	list1.push_back(6);
	list1.push_back(8);
	//�������޷�ͨ��[]����Ԫ�أ�Ҫ�õ���������
	//for (int i = 0; i < list1.size(); i++)
	//{
	//	cout << list1[i] << endl;
	//}

	list<int>::iterator ittr = list1.begin();
	for (; ittr != list1.end(); ittr++)
	{
		cout << *ittr << endl;
	}


	//����mapӳ��
	map<int, string>m;
	pair<int, string>p1(3,"hello"); //��pair����p1
	pair<int, string>p2(6, "world");
	m.insert(p1);
	m.insert(p2);
	cout << m[3] << endl;
	cout << m[6] << endl;

	map<int, string>::iterator itmr = m.begin();
	for (; itmr != m.end(); itmr++)
	{
		cout << itmr->first << endl; //�����
		cout << itmr->second << endl; //���ֵ
	
	}



	return 0;
}

