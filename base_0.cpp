#include<stdlib.h>
#include<iostream>
using namespace std;

/* bool ���������ռ� �������
*  ʹ��һ�������ҳ�һ�����������е����ֵ����Сֵ
*/
/**********************************************/
namespace CompA
{
	int getMaxOrMin(int* arr, int count, bool isMax)
	{
		int temp = arr[0];
		for (int i = 1; i < count; i++)
		{
			if (isMax)
			{
				if (temp < arr[i])
				{
					temp = arr[i];
				}
			}
			else
				if (temp > arr[i])
				{
					temp = arr[i];
				}
		}
		return temp;
	}
}


int main_1()
{
	int arr1[] = { 3,5,1,7 };
	bool isMax = false;
	cin >> isMax;
	//cout << getMaxOrMin(arr1, 4, isMax) << endl;
	cout << CompA::getMaxOrMin(arr1, 4, isMax) << endl;
	return 0;
}



typedef struct
{
	int x;
	int y;
}Coord;

/* �������õĻ������� */
int main_2()
{
	int a = 10;    // ��ͨ��������
	int& b = a;
	b = 20;
	cout << b << endl;
	a = 30;
	cout << a << endl;

	Coord c;          //�ṹ����������
	Coord& c1 = c;
	c1.x = 15;
	c1.y = 25;
	cout << c.x << ',' << c.y << endl;

	int m = 22;         //ָ����������
	int* p = &m;
	int*& q = p;
	*q = 33;
	cout << m << endl;
	return 0;
}

void fun1(int& a, int& b);

int main_3()      // �����д���ʹ�����õķ���
{
	int x = 10;
	int y = 20;
	cout << x << ',' << y << endl;
	fun1(x, y);
	cout << x << ',' << y << endl;
	return 0;
}

void fun1(int& a, int& b)
{
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
}
//
//
//void fun2(const int& a, const int& b);
//
///* ����const */
//int main_4()
//{
//	//const int x = 3;
//	int x = 3;
//	//int const* p = &x;
//	int y = 5;
//	//int* const q = &x;
//	int const& z = x;
//	// z = 10;      //  ����
//	fun2(x, y);  // ���У��ᱨ��
//	cout << x << ',' << y << endl;
//
//	return 0;
//}
//
//void fun2(const int& a, const int& b)
//{
//	a = 10;
//	b = 20;
//}

/*  ��������Ĭ��ֵ  */
void fun3(int i = 30, int j = 20, int k = 10);
int main_5()
{
	fun3();      //��ʾĬ��ֵ
	fun3(100);  // �Ḳ��Ĭ��ֵ
	fun3(100, 200, 300);
	return 0;
}

void fun3(int i , int j, int k)   //ע�����ﲻҪд����Ĭ��ֵ
{
	cout << i << ',' << j << "," << k << endl;
}

/* ��������  */
// void fun4(int i=30,int j=20,int k=10);
// void fun4(double i,double j);


/* �����ڴ���� */
int main()
{
	//int* p = new int;
	int* p = new int[1000];
	if (NULL == p)
	{
		return 0;
	}
	p[0] = 10;
	p[1] = 20;
	//*p = 20;
	cout << *p << endl;
	//delete p;
	delete[]p;
	p = NULL;
	return 0;
}




