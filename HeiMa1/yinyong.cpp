#include<iostream>
#include<string>
using namespace std;



/* ���õı��ʾ���ָ�볣����ָ��ָ�򲻿��޸ģ�ָ���ֵ���޸ģ� */

void func(int& ref)
{
	ref = 100;
}





int main()
{
	int a = 10;

	//�൱���Զ�ת��Ϊint* const ref= &a;
	int& ref = a;
	ref = 20;//�ڲ�����ref�����ã��Զ�������ת��Ϊ*ref=20;

	cout << "a: " << a << endl;
	cout << "ref: " << ref << endl;

	func(a);
	cout << "ref: " << ref << endl;
	return 0;

}