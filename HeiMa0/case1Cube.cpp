#include<iostream>
#include<string>
using namespace std;


//����1�������������
//�����࣬������ԣ������Ϊ��ȡ��������
//��ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����(�������������)

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
	cout<<"c1�����Ϊ��"<<c1.calculateS()<<endl;
	cout << "c1�����Ϊ��" << c1.calculateV() << endl;

	Cube c2;
	c2.setLWH(5, 4, 3);

	//����ȫ�ֺ����ж�
	bool ret = isSame(c1, c2); 
	if (ret)
	{
		cout << "c1��c2����ȵ�" << endl;
	}
	else
	{
		cout << "c1��c2�����" << endl;
	}
	//���ó�Ա�����ж�
	bool rett = c1.isSameByClass(c2);
	if (rett)
	{
		cout <<"��Ա�����жϣ�c1��c2����ȵ�" << endl;
	}
	else
	{
		cout << "��Ա�����жϣ�c1��c2�����" << endl;
	}

	return 0;
}