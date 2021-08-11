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


//队列queue 只能访问队头队尾，不能遍历
void test20()
{
	queue<Person>q;

	Person p1("唐僧", 30);
	Person p2("孙悟空", 1000);
	Person p3("猪八戒", 900);
	Person p4("沙僧", 800);

	//入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	cout << "队列的大小：" << q.size() << endl;

	while (!q.empty())
	{
		//查看每次出队后的队头和队尾
		cout << "队头元素---姓名：" << q.front().m_Name << "  年龄：" << q.front().m_Age << endl;
		cout << "队尾元素---姓名：" << q.back().m_Name << "  年龄：" << q.back().m_Age << endl;

		q.pop(); 
	}

	cout << "队列的大小：" << q.size() << endl;
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
//		cout << "栈顶元素为: " << s.top() << endl;
//		s.pop();
//	}
//	cout << "栈大小为: " << s.size() << endl;
//
//}



int main_04()
{
	test20();
	//test21();
	return 0;
}