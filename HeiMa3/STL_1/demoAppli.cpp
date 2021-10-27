#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<ctime>
using namespace std;


/***

  应用案例描述：
      公司招聘了10个员工（ABCDEFGHIJ）,需要指派员工在哪个部门工作；
	  员工信息有：姓名，工资；部门分为：策划，美术，研发
	  随机给10名员工分配部门和工资
	  通过multimap进行信息的插入 key(部门编号) value(员工)
	  分部门输出显示员工信息

**/


#define CEHUA 0
#define MEISHU 1
#define YANFA 2

//创建一个员工类
class Staff
{
public:
	string m_Name;
	int m_Salary;

};

//初始化员工信息并放入vector
void createStaff(vector<Staff>&s)
{
	string nameSeed("ABCDEFGHIJ");
	for (int i = 0; i < 10; i++)
	{
		Staff staff;
		staff.m_Name = "员工";
		staff.m_Name += nameSeed[i];
		staff.m_Salary = rand() % 10001 + 10000;   //10000~20000

		s.push_back(staff);
	}

}

//员工分组,用到multimap
void setGroup(vector<Staff>&s, multimap<int, Staff>&ss)
{
	for (auto &i : s)  //把员工分到相应部门
	{
		int deptID = rand() % 3;  //部门编号

		ss.insert(make_pair(deptID, i));

	}

}

//分组显示
void showWorker(multimap<int, Staff>&m)
{
	cout << "策划部门：" << endl;
	multimap<int,Staff>::iterator pos = m.find(CEHUA);
	int num = m.count(CEHUA);
	int index = 0;
	for (; pos !=m.end() && index < num; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_Name << " " << "工资：" << (*pos).second.m_Salary << endl;
	}

	cout << "---------------------------------" << endl;
	cout << "美术部门：" << endl;
	pos = m.find(MEISHU);
	num = m.count(MEISHU);
	index = 0;
	for (; pos != m.end() && index < num; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_Name << " " << "工资：" << (*pos).second.m_Salary << endl;
	}

	cout << "---------------------------------" << endl;
	cout << "研发部门：" << endl;
	pos = m.find(YANFA);
	num = m.count(YANFA);
	index = 0;
	for (; pos != m.end() && index < num; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_Name << " " << "工资：" << (*pos).second.m_Salary << endl;
	}

}


int main_05()
{
	srand((unsigned int)time(NULL));
	vector<Staff>s;
	createStaff(s);
	/*for (auto &i : s)
	{
		cout << "姓名：" << i.m_Name << " " << "工资:" << i.m_Salary << endl;

	}*/
	multimap<int, Staff>ss;
	setGroup(s, ss);

	showWorker(ss);

	return 0;

}

