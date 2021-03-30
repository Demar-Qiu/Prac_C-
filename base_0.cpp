#include<stdlib.h>
#include<iostream>
using namespace std;

/* bool 类型命名空间 输入输出
*  使用一个函数找出一个整型数组中的最大值和最小值
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

/* 关于引用的基础操作 */
int main_2()
{
	int a = 10;    // 普通类型引用
	int& b = a;
	b = 20;
	cout << b << endl;
	a = 30;
	cout << a << endl;

	Coord c;          //结构体类型引用
	Coord& c1 = c;
	c1.x = 15;
	c1.y = 25;
	cout << c.x << ',' << c.y << endl;

	int m = 22;         //指针类型引用
	int* p = &m;
	int*& q = p;
	*q = 33;
	cout << m << endl;
	return 0;
}

void fun1(int& a, int& b);

int main_3()      // 函数中传参使用引用的方法
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
///* 关于const */
//int main_4()
//{
//	//const int x = 3;
//	int x = 3;
//	//int const* p = &x;
//	int y = 5;
//	//int* const q = &x;
//	int const& z = x;
//	// z = 10;      //  不行
//	fun2(x, y);  // 不行，会报错
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

/*  函数参数默认值  */
void fun3(int i = 30, int j = 20, int k = 10);
int main_5()
{
	fun3();      //显示默认值
	fun3(100);  // 会覆盖默认值
	fun3(100, 200, 300);
	return 0;
}

void fun3(int i , int j, int k)   //注意这里不要写参数默认值
{
	cout << i << ',' << j << "," << k << endl;
}

/* 函数重载  */
// void fun4(int i=30,int j=20,int k=10);
// void fun4(double i,double j);


/* 关于内存管理 */
int main_z()
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


#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;


/* 关于类的基础学习 */

class Demar
{
public:                // 数据成员成员函数都在public中
	int x;
	int y;
	void printX()
	{
		cout << x << endl;
	}
	void printY()
	{
		cout << y << endl;
	}
};

int main_6()
{
	Demar de;

	de.x = 10;      //栈的方式实例化对象
	de.y = 20;
	de.printX();
	de.printY();

	Demar* p = new Demar(); //堆的方式实例化
	if (NULL == p)
	{
		p->x = 15;
		p->y = 25;
		p->printX();
		p->printY();
		delete p;
		p = NULL;
	}

	return 0;
}


/* 字符串的基本操作学习 */

string s1 = "hello";
string s2("world");
string s3 = s1 + s2;
string s4 = "hello" + s2;
string s5 = "hello" + s2 + "world";
//string s6 = "hello" + "world";         // 不合法！！


/*
eg.
   1.提示用户输入姓名
   2.接收用户的输入
   3.然后向用户问好，hello XXX
   4.告诉用户名字的长度
   5.告诉用户名字的首字母
   6.如果用户输入回车，告诉用户输入为空
   7.如果用户输入imooc，告诉用户的角色是一个管理员
*/


int main_7()
{
	string name;
	cout << "Please input your name:";
	getline(cin, name);   // 因为要输入回车,cin不能
	if (name.empty())
	{
		cout << "input is null.." << endl;
		return 0;
	}
	if (name == "imooc")
	{
		cout << "you are an administrator" << endl;
	}
	cout << "hello " + name << endl;
	cout << "your name length is " << name.size() << endl;
	cout << "your name first letter is: " << name[0] << endl;
	return 0;
}


/* 数据的封装 */
class Student
{
public:
	void setName(string _name)
	{
		m_strName = _name;
	}
	string getName()
	{
		return m_strName;
	}
	void setGender(string _gender)
	{
		m_strGender = _gender;
	}
	string getGender()
	{
		return m_strGender;
	}
	int getScore()
	{
		return m_iScore;    //学分只读
	}
	void initScore()
	{
		m_iScore = 0;
	}
	void study(int _score)
	{
		m_iScore += _score;
	}
private:
	string m_strName;
	string m_strGender;
	int m_iScore;
};

int main_8()
{
	Student stu;
	stu.initScore();      // 必须初始化
	stu.setName("QiuLong");
	stu.setGender("男");
	stu.study(5);
	stu.study(3);
	cout << stu.getName() << " " << stu.getGender() << " " << stu.getScore() << endl;
	return 0;
}


/* 定义一个Teacher 类 ，分别采用同文件类外定义和分文件类外定义 */
// 同文件类外定义
//class Teacher
//{
//public:
//	void setName(string _name);
//	string getName();
//	void setGender(string _gender);
//	string getGender();
//	void setAge(int _age);
//	int getAge();
//	void teach();
//private:
//	string m_strName;
//	string m_strGender;
//	int m_iAge;
 //};
//
//void Teacher::setName(string _name)
//{
//	m_strName = _name;
//}
//
//string Teacher::getName()
//{
//	return m_strName;
//}
//
//void Teacher::setGender(string _gender)
//{
//	m_strGender = _gender;
//}
//string Teacher::getGender()
//{
//	return m_strGender;
//}
//
//void Teacher::setAge(int _age)
//{
//	m_iAge = _age;
//}
//int Teacher::getAge()
//{
//	return m_iAge;
//}
//void Teacher::teach()
//{
//	cout << "现在上课..." << endl;
//}

#include<vector>

// 分文件类外定义
#include"Teacher.h"
int main()
{
	//Teacher* p = new Teacher();
	//delete p;                   // 注意析构函数
	//Teacher t;   // 调用构造函数
	////Teacher t("Merry", 15, 150);
	//Teacher t1 = t;
	//Teacher t3(t);
	////Teacher t1("Merry", 15);
	////t.setName("孔子");
	////t.setGender("男");
	////t.setAge(30);
	//cout << t.getName() << " " << t.getGender() << " " << t.getAge()<<" "<<t.getMax()<< endl;
	//cout << t1.getName() << " " << t1.getGender() << " " << t1.getAge() << " " << t1.getMax() << endl;
	//t.teach();
	
	//vector<int>v;
	//for (int i = 0; i != 100; ++i)
	//{
	//	v.push_back(i);
	//	cout << v[i] << endl;
	//}

	/* 关于对象数组 */
   //栈中实例化对象数组
	Coordinate coor[3];
	coor[0].m_iX = 3;
	coor[0].m_iY = 5;
	//堆中实例化对象数组
	Coordinate* r = new Coordinate[3];
	r->m_iX = 7;
	r[0].m_iY = 9;

	r++;
	r->m_iX = 11;  //此时是第二个元素
	r[0].m_iY = 13;
	r[1].m_iX = 15; // 此时是第三个元素
	r++;
	r->m_iY = 17;  // 也是第三个元素
	for (int i = 0; i < 3; i++)
	{
		cout << "coor_x" << coor[i].m_iX << endl;
		cout << "coor_y" << coor[i].m_iY << endl;
	}
	for (int j = 0; j < 3; j++)
	{
		cout << "r_x" << r->m_iX << endl;
		cout << "r_y" << r->m_iY << endl;
		r--;        // r从第三个元素往前指
		           // 最后一次--后r指向了非法内存，不能直接释放
	}
	r++;
	delete []r;
	r = NULL;
 
	return 0;
}









