#include<iostream>
#include<string>
using namespace std;


//案例1：立方体类设计
//创建类，设计属性，设计行为获取面积和体积
//用全局函数和成员函数判断两个立方体是否相等(这里可能有歧义)

class Cube
{
public:
	void setLWH(int l, int w, int h)
	{
		m_L = l;
		m_W = w;
		m_H = h;
	}

	int getL()
	{
		return m_L;
	}

	int getW()
	{
		return m_W;
	}

	int getH()
	{
		return m_H;
	}

	int calculateS()
	{
		return 2 * (m_L*m_H + m_L * m_W + m_H * m_W);
	}

	int calculateV()
	{
		return m_L * m_W*m_H;
	}

	bool isSameByClass(Cube &c)
	{
		if (m_L == c.getL() && m_H == c.getH() && m_W == getW())
		{
			return true;
		}
		return false;
	}
private:
	int m_L;
	int m_W;
	int m_H;


};


bool isSame(Cube c1, Cube c2)
{
	int a[3] = {0};
	a[0] = c1.getL();
	a[1] = c1.getH();
	a[2] = c1.getW();
	for (int i = 0; i < 2; i++)
	{
		int tem = 0;
		if (a[i] < a[i + 1])
		{
			tem = a[i];
			a[i] = a[i + 1];
			a[i + 1] = tem;
		}
	}
	int b[3] = { 0 };
	b[0] = c2.getL();
	b[1] = c2.getH();
	b[2] = c2.getW();
	for (int i = 0; i < 2; i++)
	{
		int tem = 0;
		if (b[i] < b[i + 1])
		{
			tem = b[i];
			b[i] = b[i + 1];
			b[i + 1] = tem;
		}
	}
	for (int j = 0; j < 3; j++)
	{
		if (a[j] == b[j] && a[j + 1] == b[j + 1] && a[j + 2] == b[j + 2])
		{
			return true;
		}
	}
	return false;
		
}

int main_3()
{
	Cube c1;
	c1.setLWH(3, 4, 5);
	cout<<"c1的面积为："<<c1.calculateS()<<endl;
	cout << "c1的体积为：" << c1.calculateV() << endl;

	Cube c2;
	c2.setLWH(5, 4, 3);

	//利用全局函数判断
	bool ret = isSame(c1, c2); 
	if (ret)
	{
		cout << "c1和c2是相等的" << endl;
	}
	else
	{
		cout << "c1和c2不相等" << endl;
	}
	//利用成员函数判断
	bool rett = c1.isSameByClass(c2);
	if (rett)
	{
		cout <<"成员函数判断：c1和c2是相等的" << endl;
	}
	else
	{
		cout << "成员函数判断：c1和c2不相等" << endl;
	}

	return 0;
}