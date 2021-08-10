#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<algorithm>
#include<ctime>
using namespace std;

//选手类
class Player
{
public:
	Player(string name, int score)
	{
		m_Name = name;
		m_Score = score;
	}

public:
	string m_Name; //姓名
	int m_Score;  //平均分

};

void createPlayer(vector<Player>&v)
{
	string nameSeed = "ABCDE";
	for (int i=0;i<5;i++)
	{
		string name = "选手";
		name += nameSeed[i];
		int score = 0;
		Player p(name, score);
		v.push_back(p);
	}
}

void setScore(vector<Player>&v)
{
	for (auto &ii : v)  //注意这里的引用！！！
	{
		deque<int>d;
		//将评委分数放入deque容器中
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;  //60~100
			d.push_back(score);
		}
		cout << "选手：" << ii.m_Name << "评委打分：" << endl;
		for (auto jj : d)
		{
			cout << jj << " ";
		}
		cout << endl;
		//排序
		sort(d.begin(), d.end());
		//去除最高和最低分
		d.pop_front();
		d.pop_back();
		//取平均分
		int sum = 0;
		for (auto j : d)
		{
			sum += j;
		}
		//cout << sum << endl;
		int avg = sum / d.size();
		ii.m_Score = avg;
		//cout << ii.m_Score << endl;
	}
}

void showScore(vector<Player>&v)
{
	for (auto i : v)
	{
		cout << "姓名：" << i.m_Name << "得分: " << i.m_Score<<endl;
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	//1、创建五个选手
	vector<Player>v;
	createPlayer(v);

	//for (auto i : v)
	//{
	//	cout << "姓名:" << i.m_Name << "  分数:" << i.m_Score << endl;
	//}

	//2、给他们打分
    setScore(v);
	for (auto i : v)
	{
		cout << "姓名：" << i.m_Name << "得分: " << i.m_Score << endl;
	}
	//显示最后得分
	//showScore(v);

	return 0;
}