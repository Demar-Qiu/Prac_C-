#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<ctime>
using namespace std;


/***

  Ӧ�ð���������
      ��˾��Ƹ��10��Ա����ABCDEFGHIJ��,��Ҫָ��Ա�����ĸ����Ź�����
	  Ա����Ϣ�У����������ʣ����ŷ�Ϊ���߻����������з�
	  �����10��Ա�����䲿�ź͹���
	  ͨ��multimap������Ϣ�Ĳ��� key(���ű��) value(Ա��)
	  �ֲ��������ʾԱ����Ϣ

**/


#define CEHUA 0
#define MEISHU 1
#define YANFA 2

//����һ��Ա����
class Staff
{
public:
	string m_Name;
	int m_Salary;

};

//��ʼ��Ա����Ϣ������vector
void createStaff(vector<Staff>&s)
{
	string nameSeed("ABCDEFGHIJ");
	for (int i = 0; i < 10; i++)
	{
		Staff staff;
		staff.m_Name = "Ա��";
		staff.m_Name += nameSeed[i];
		staff.m_Salary = rand() % 10001 + 10000;   //10000~20000

		s.push_back(staff);
	}

}

//Ա������,�õ�multimap
void setGroup(vector<Staff>&s, multimap<int, Staff>&ss)
{
	for (auto &i : s)  //��Ա���ֵ���Ӧ����
	{
		int deptID = rand() % 3;  //���ű��

		ss.insert(make_pair(deptID, i));

	}

}

//������ʾ
void showWorker(multimap<int, Staff>&m)
{
	cout << "�߻����ţ�" << endl;
	multimap<int,Staff>::iterator pos = m.find(CEHUA);
	int num = m.count(CEHUA);
	int index = 0;
	for (; pos !=m.end() && index < num; pos++, index++)
	{
		cout << "������" << pos->second.m_Name << " " << "���ʣ�" << (*pos).second.m_Salary << endl;
	}

	cout << "---------------------------------" << endl;
	cout << "�������ţ�" << endl;
	pos = m.find(MEISHU);
	num = m.count(MEISHU);
	index = 0;
	for (; pos != m.end() && index < num; pos++, index++)
	{
		cout << "������" << pos->second.m_Name << " " << "���ʣ�" << (*pos).second.m_Salary << endl;
	}

	cout << "---------------------------------" << endl;
	cout << "�з����ţ�" << endl;
	pos = m.find(YANFA);
	num = m.count(YANFA);
	index = 0;
	for (; pos != m.end() && index < num; pos++, index++)
	{
		cout << "������" << pos->second.m_Name << " " << "���ʣ�" << (*pos).second.m_Salary << endl;
	}

}


int main_05()
{
	srand((unsigned int)time(NULL));
	vector<Staff>s;
	createStaff(s);
	/*for (auto &i : s)
	{
		cout << "������" << i.m_Name << " " << "����:" << i.m_Salary << endl;

	}*/
	multimap<int, Staff>ss;
	setGroup(s, ss);

	showWorker(ss);

	return 0;

}

