#include<iostream>
#include<string>
using namespace std;


//����2�����һ��Բ���һ�����࣬������Բ�Ĺ�ϵ
// ���ݵ㵽Բ�ĵľ��룬�ж�Բ�ϡ�Բ�⡢Բ��

class Point
{
public:
	void setX(int x)
	{
		m_X=x;
	}
	void setY(int y)
	{
		m_Y=y;
	}
	int getX()
	{
		return m_X;
	}
	int getY()
	{
		return m_Y;
	}
private:
	int m_X;
	int m_Y;

};

class Circle
{
public:
	void setR(int r)
	{
		m_R = r;
	}
	int getR()
	{
		return m_R;
	}
	void setCenter(Point center)
	{
		m_Center = center;
	}
	Point getCenter()
	{
		return m_Center;
	}
private:
	int m_R;
	Point m_Center;  //Բ��Ҳ�Ǹ��������

};

//�жϵ��Բ�Ĺ�ϵ
void isInCircle(Circle &c, Point &p)
{
	int distance =
		(c.getCenter().getX() - p.getX())*(c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY())*(c.getCenter().getY() - p.getY());
	int rDistance = c.getR()*c.getR(); //�뾶
	if (distance == rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}

}



int main_4()
{
	//����Բ
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//������
	Point p;
	p.setX(10);
	p.setY(10);

	//�жϹ�ϵ
	isInCircle(c, p);

	return 0;
}