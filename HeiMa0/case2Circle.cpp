#include<iostream>
#include<string>
using namespace std;


//案例2：设计一个圆类和一个点类，计算点和圆的关系
// 根据点到圆心的距离，判断圆上、圆外、圆内

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
	Point m_Center;  //圆心也是个点类对象

};

//判断点和圆的关系
void isInCircle(Circle &c, Point &p)
{
	int distance =
		(c.getCenter().getX() - p.getX())*(c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY())*(c.getCenter().getY() - p.getY());
	int rDistance = c.getR()*c.getR(); //半径
	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}

}



int main_4()
{
	//创建圆
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//创建点
	Point p;
	p.setX(10);
	p.setY(10);

	//判断关系
	isInCircle(c, p);

	return 0;
}