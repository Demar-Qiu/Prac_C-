#include<iostream>
using namespace std;

//�����ǳ����

class Person
{
public:
	//���캯��
	Person()
	{
		cout << "Person���޲ι��캯������" << endl;
	}
	Person(int a,int height,int count)
	{
		m_Age = a;
		m_Height = new int(height);
		m_iCount = count;
		m_pArr = new int[m_iCount];
		for (int i=0; i < m_iCount; i++)
		{
			m_pArr[i] = i;
		}
		cout << "Person���вι��캯������" << endl;
	}

	///�Լ�д�������캯�����ǳ��������������
	Person(const Person &p)
	{
		cout << "�������캯������" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;  //�����Ǳ�������Ĭ�Ͽ�������д��
		//�ĳ����
		m_Height = new int(*p.m_Height); //�����ڶ�������һ���ڴ渴������
		m_iCount = p.m_iCount;
		m_pArr = new int[m_iCount];
		for (int i=0; i < m_iCount; i++)
		{
			m_pArr[i] = p.m_pArr[i];
		}
	}


	//��������
	~Person()
	{
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person���������캯������" << endl;
	}

	void printArr()
	{
		for (int i=0; i < m_iCount; i++)
		{
			cout << m_pArr[i]<<endl;
		}
	}

	int m_Age;
	//ע���ʱ����ָ���Ա!!
	int* m_Height;  
	int m_iCount;
	int* m_pArr; 

};

void test00()
{
	Person p1(18,167,6);

	cout << "p1�����䣺" << p1.m_Age <<" ���Ϊ��"<<*p1.m_Height<< endl;

	Person p2(p1);//���ݱ������ṩ�Ŀ������캯������ǳ�������� 
          
	//֮���ڵ������������ͷ��ڴ�ʱ�����ͷ�p2,����ָ��ָ��Ķ����ڴ��ͷţ�
	//Ȼ��p1ִ������������p1��һ���ͷ���ͬһ����е��ڴ棬�����ظ��ͷš�

	cout << "p2�����䣺" << p2.m_Age << " ���Ϊ��"<<*p2.m_Height << endl;
	p1.printArr();
	p2.printArr();

} 

int main_6()
{
	test00();
	return 0;
}



