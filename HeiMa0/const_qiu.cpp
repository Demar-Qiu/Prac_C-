#include<iostream>
using namespace std;


//������  �����Բ����޸ģ�
//������ֻ�ܵ��ó�����

class Student
{
public:
	void showStu()const  //thisָ�뱾������ָ�볣����ָ���ֵ��Ҳ���ǵ�ַ���ǲ����޸ĵ�
	// this�൱����Student* const this
	{
		//m_A = 100;   //��ʱ�൱����const Student* const this��ָ��ָ���ֵ���޸�
	}
	int m_A; //�������������ʹ�ڳ�������Ҳ���޸ģ�ǰ��ӹؼ���mutable��
};


int main_11()
{
	const Student s1;  //������
	//s1.m_A=200;


	return 0;
}