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


/* ������Ļ���ѧϰ */

class Demar
{
public:                // ���ݳ�Ա��Ա��������public��
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

	de.x = 10;      //ջ�ķ�ʽʵ��������
	de.y = 20;
	de.printX();
	de.printY();

	Demar* p = new Demar(); //�ѵķ�ʽʵ����
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


/* �ַ����Ļ�������ѧϰ */

string s1 = "hello";
string s2("world");
string s3 = s1 + s2;
string s4 = "hello" + s2;
string s5 = "hello" + s2 + "world";
//string s6 = "hello" + "world";         // ���Ϸ�����


/*
eg.
   1.��ʾ�û���������
   2.�����û�������
   3.Ȼ�����û��ʺã�hello XXX
   4.�����û����ֵĳ���
   5.�����û����ֵ�����ĸ
   6.����û�����س��������û�����Ϊ��
   7.����û�����imooc�������û��Ľ�ɫ��һ������Ա
*/


int main_7()
{
	string name;
	cout << "Please input your name:";
	getline(cin, name);   // ��ΪҪ����س�,cin����
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


/* ���ݵķ�װ */
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
		return m_iScore;    //ѧ��ֻ��
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
	stu.initScore();      // �����ʼ��
	stu.setName("QiuLong");
	stu.setGender("��");
	stu.study(5);
	stu.study(3);
	cout << stu.getName() << " " << stu.getGender() << " " << stu.getScore() << endl;
	return 0;
}


/* ����һ��Teacher �� ���ֱ����ͬ�ļ����ⶨ��ͷ��ļ����ⶨ�� */
// ͬ�ļ����ⶨ��
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
//	cout << "�����Ͽ�..." << endl;
//}

#include<vector>

// ���ļ����ⶨ��
#include"Teacher.h"
int main()
{
	//Teacher* p = new Teacher();
	//delete p;                   // ע����������
	//Teacher t;   // ���ù��캯��
	////Teacher t("Merry", 15, 150);
	//Teacher t1 = t;
	//Teacher t3(t);
	////Teacher t1("Merry", 15);
	////t.setName("����");
	////t.setGender("��");
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

	/* ���ڶ������� */
   //ջ��ʵ������������
	Coordinate coor[3];
	coor[0].m_iX = 3;
	coor[0].m_iY = 5;
	//����ʵ������������
	Coordinate* r = new Coordinate[3];
	r->m_iX = 7;
	r[0].m_iY = 9;

	r++;
	r->m_iX = 11;  //��ʱ�ǵڶ���Ԫ��
	r[0].m_iY = 13;
	r[1].m_iX = 15; // ��ʱ�ǵ�����Ԫ��
	r++;
	r->m_iY = 17;  // Ҳ�ǵ�����Ԫ��
	for (int i = 0; i < 3; i++)
	{
		cout << "coor_x" << coor[i].m_iX << endl;
		cout << "coor_y" << coor[i].m_iY << endl;
	}
	for (int j = 0; j < 3; j++)
	{
		cout << "r_x" << r->m_iX << endl;
		cout << "r_y" << r->m_iY << endl;
		r--;        // r�ӵ�����Ԫ����ǰָ
		           // ���һ��--��rָ���˷Ƿ��ڴ棬����ֱ���ͷ�
	}
	r++;
	delete []r;
	r = NULL;
 
	return 0;
}









