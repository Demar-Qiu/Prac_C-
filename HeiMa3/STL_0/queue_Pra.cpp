#include<iostream>
#include<string>
#include<stack>
#include<queue>
using namespace std;


class Person
{
public:
	Person(string name, int age) :m_Name(name), m_Age(age) {}
	string m_Name;
	int m_Age;

};


//����queue ֻ�ܷ��ʶ�ͷ��β�����ܱ���
void test20()
{
	queue<Person>q;

	Person p1("��ɮ", 30);
	Person p2("�����", 1000);
	Person p3("��˽�", 900);
	Person p4("ɳɮ", 800);

	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	cout << "���еĴ�С��" << q.size() << endl;

	while (!q.empty())
	{
		//�鿴ÿ�γ��Ӻ�Ķ�ͷ�Ͷ�β
		cout << "��ͷԪ��---������" << q.front().m_Name << "  ���䣺" << q.front().m_Age << endl;
		cout << "��βԪ��---������" << q.back().m_Name << "  ���䣺" << q.back().m_Age << endl;

		q.pop(); 
	}

	cout << "���еĴ�С��" << q.size() << endl;
}


//
//void test21()
//{
//	stack<int>s;
//	s.push(1);
//	s.push(2);
//	s.push(3);
//	s.push(4);
//
//	while (!s.empty())
//	{
//		cout << "ջ��Ԫ��Ϊ: " << s.top() << endl;
//		s.pop();
//	}
//	cout << "ջ��СΪ: " << s.size() << endl;
//
//}



int main_04()
{
	test20();
	//test21();
	return 0;
}