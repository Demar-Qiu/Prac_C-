#include<iostream>
#include<string>
using namespace std;


//��ѧϰ����pair
//���Է�����������

void test03()
{
	//�������鷽ʽһ
	pair<string, int>p("Tom", 25);
	cout << "������" << p.first << "  ���䣺" << p.second << endl;

	//��ʽ��
	pair<string, int>r = make_pair("Jerry", 18);
	cout << "������" << r.first << "  ���䣺" << r.second << endl;

}


int main_01()
{
	test03();

	return 0;
}