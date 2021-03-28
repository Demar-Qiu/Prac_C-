#pragma once
#include<string>
using namespace std;

class Teacher
{
public:
	//Teacher();   // �޲ι��캯��
	//Teacher(string name, int age);   //�вι��캯��
	Teacher(string name="Derozan", int age=31,int m=100);  // Ĭ�Ϲ��캯��
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
	const int m_iMax;   //������������ó�ʼ���б�
};




