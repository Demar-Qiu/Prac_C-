#include<iostream>
#include<string>
using namespace std;


class Man
{
public:
	//��ͳ��ʼ������
	Man(int a, int b, int c)
	{
		m_A = a;
		m_B = b;
		m_C = c;
	}

	//��ʼ���б�
	//Man() :m_A(10),m_B(20),m_C(30)
	//{
	//	
	//}

	//Man(int a, int b, int c) :m_A(a), m_B(b), m_C(c)
	//{
	//	
	//}

	int m_A;
	int m_B;
	int m_C;

};


//��ʼ���б�ʹ�õı����������δ��Ĭ�Ϲ��캯����ֻ���вι��죩
class People
{
public:
	//People(Man &m)
	//{
	//	m_Man = m;   //��ʱ�޷���ʼ�����ᱨ��
	//}

	People(Man &m) :m_Man(m)   //ֻ���ó�ʼ���б�
	{
	}

public:
	Man m_Man;  //�������Ϊ������ݳ�Ա

};



void test04()
{
	Man m(10, 20, 30);
	cout << "m_A= " << m.m_A << endl;
	cout << "m_B= " << m.m_B << endl;
	cout << "m_C= " << m.m_C << endl;
}


int main_7()
{
	test04();
	return 0;
}

//�������Ϊ���ݳ�Ա   //ע���������ͷŵ�˳����ѭ�Ƚ����ԭ��
class Phone
{
public:
	Phone(string pName)
	{
		m_PName = pName;
		cout << "Phone�Ĺ��캯������" << endl;
	}
	~Phone()
	{
		cout << "Phone�����������ĵ���" << endl;
	}

	string m_PName;
};

class Family
{

public:
	Family(string name, string pName):m_Name(name),m_Phone(pName)
	{
		cout << "Family�Ĺ��캯������" << endl;
	}
	~Family()
	{
		cout << "Family�����������ĵ���" << endl;
	}

	string m_Name;
	Phone m_Phone;
};


int main_8()
{
	Family f("�Ž�", "ƻ��");
	cout << f.m_Name << " take a " << f.m_Phone.m_PName << endl;
	return 0;
}