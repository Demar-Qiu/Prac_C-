//#include<iostream>
//#include<string>
//using namespace std;
//
////成员属性私有化
//// 1、可自己控制读写权限；2、对于写可以检测数据的有效性
//
//
//class Person
//{
//public:
//	void setName(string name)  //可读可写
//	{
//		m_Name = name;
//	}
//	string getName()
//	{
//		return m_Name;
//	}
//	int getAge()   //只读
//	{
//		return m_Age;
//	}
//	void setLover(string lover)  //只写
//	{
//		m_Lover = lover;
//	}
//
//	void setAge(int age)
//	{
//		if (age < 0 || age >= 150)
//		{
//			m_Age = 0;
//			cout << "Error" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//private:      //此时不可直接访问，所以只能用get函数访问
//	string m_Name;
//	int m_Age;
//	string m_Lover;
//
//};
//
//
//
//int main()
//{
//	Person p;
//	p.setName("李阳");
//	p.setAge(19);
//
//	cout<< "姓名为: "<<p.getName()<< endl;
//	cout << "年龄为：" << p.getAge() << endl;
//	p.setLover("苍井");
//
//
//	return 0;
//}