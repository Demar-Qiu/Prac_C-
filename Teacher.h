#pragma once
#include<string>
using namespace std;

class Teacher
{
public:
	//Teacher();   // 无参构造函数
	//Teacher(string name, int age);   //有参构造函数
	Teacher(string name="Derozan", int age=31,int m=100);  // 默认构造函数
	Teacher(const Teacher& tea);  
	~Teacher();
	void setName(string _name);
	string getName();
	void setGender(string _gender);
	string getGender();
	void setAge(int _age);
	int getAge();
	void teach();
	int getMax();
private:
	string m_strName;
	string m_strGender;
	int m_iAge;
	const int m_iMax;   //表明这里必须用初始化列表
};




