#include<iostream>
#include<string>
using namespace std;


//���ڽṹ��
struct student
{
	string name;
	int age;
	int score;
}su;

//�ṹ��ֵ����
void printStudentInfo1(struct student s)
{
	s.age = 50;
	cout << "ѧ��������" << s.name << "ѧ�����䣺" <<s.age<<"ѧ������: "<<s.score<<endl;
}

//�ṹ���ַ����
void printStudentInfo2(struct student* s)
{
	s->age = 55;
	cout << "ѧ������: " << s->name << "ѧ�����䣺" << s->age << "ѧ������: " << s->score<< endl;
}


int main()
{
	struct student s;
	s.name = "���";
	s.age = 22;
	s.score = 85;
	
	printStudentInfo1(s); //ֵ���ݲ�Ӱ��ʵ��
	//ʵ�ε�ֵ���뺯�����βΣ��൱���βο�����һ��ʵ�ε�ֵ�������ǲ�һ���ģ��޸��ββ�Ӱ��ʵ�Ρ�

	//printStudentInfo2(&s); //ָ����Ϊ������Ӱ��ʵ��
	//ʵ�εĵ�ַ���뺯�����βΣ�ָ����գ���������ͨ�������÷��������ַ�е�ֵ��ʵ���Ͼ���ʵ�ε�ֵ
	cout << "ѧ��������" << s.name << "ѧ�����䣺" << s.age << "ѧ������: " << s.score << endl;
	
	return 0;

}