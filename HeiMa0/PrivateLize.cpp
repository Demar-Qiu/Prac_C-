//#include<iostream>
//#include<string>
//using namespace std;
//
////��Ա����˽�л�
//// 1�����Լ����ƶ�дȨ�ޣ�2������д���Լ�����ݵ���Ч��
//
//
//class Person
//{
//public:
//	void setName(string name)  //�ɶ���д
//	{
//		m_Name = name;
//	}
//	string getName()
//	{
//		return m_Name;
//	}
//	int getAge()   //ֻ��
//	{
//		return m_Age;
//	}
//	void setLover(string lover)  //ֻд
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
//private:      //��ʱ����ֱ�ӷ��ʣ�����ֻ����get��������
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
//	p.setName("����");
//	p.setAge(19);
//
//	cout<< "����Ϊ: "<<p.getName()<< endl;
//	cout << "����Ϊ��" << p.getAge() << endl;
//	p.setLover("�Ծ�");
//
//
//	return 0;
//}