#include<iostream>
#include<string>
using namespace std;




//������������
void swapInt(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;

}

//��������������
void swapDouble(double &a, double &b)
{
	double temp = a;
	a = b;
	b = temp;

}

void test01()
{
	int a = 10;
	int b = 20;
	swapInt(a, b);
	cout << "a= " <<a<< " " << "b= " << b << endl;

	double c = 1.1;
	double d = 2.2;
	swapDouble(c, d);
	cout << "c= " << c << " " << "d= " << d << endl;
}

template<typename T>
void Myswap(T &a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test02()
{
	int a = 10;
	int b = 12;
	Myswap(a, b);  //�Զ�����ת��
	cout << "a= " << a << " " << "b= " << b << endl;

	Myswap<int>(a,b);
	cout << "a= " << a << " " << "b= " << b << endl;
}

//��ͨ�����뺯��ģ�����
void myPrint(int a, int b)
{
	cout << "���õ���ͨ����" << endl;
}

template<class T>
void myPrint(T a, T b)
{
	cout << "���õ�ģ��" << endl;
}


void test03()
{
	int a = 10;
	int b = 20;

	//myPrint(a, b);

	//ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
	myPrint<>(a,b);
}


int main_0()
{ 
	//test02();

	test03();
	return 0;
}

 