#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<algorithm>
#include<ctime>
using namespace std;

//ѡ����
class Player
{
public:
	Player(string name, int score)
	{
		m_Name = name;
		m_Score = score;
	}

public:
	string m_Name; //����
	int m_Score;  //ƽ����

};

void createPlayer(vector<Player>&v)
{
	string nameSeed = "ABCDE";
	for (int i=0;i<5;i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];
		int score = 0;
		Player p(name, score);
		v.push_back(p);
	}
}

void setScore(vector<Player>&v)
{
	for (auto &ii : v)  //ע����������ã�����
	{
		deque<int>d;
		//����ί��������deque������
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;  //60~100
			d.push_back(score);
		}
		cout << "ѡ�֣�" << ii.m_Name << "��ί��֣�" << endl;
		for (auto jj : d)
		{
			cout << jj << " ";
		}
		cout << endl;
		//����
		sort(d.begin(), d.end());
		//ȥ����ߺ���ͷ�
		d.pop_front();
		d.pop_back();
		//ȡƽ����
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
		cout << "������" << i.m_Name << "�÷�: " << i.m_Score<<endl;
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	//1���������ѡ��
	vector<Player>v;
	createPlayer(v);

	//for (auto i : v)
	//{
	//	cout << "����:" << i.m_Name << "  ����:" << i.m_Score << endl;
	//}

	//2�������Ǵ��
    setScore(v);
	for (auto i : v)
	{
		cout << "������" << i.m_Name << "�÷�: " << i.m_Score << endl;
	}
	//��ʾ���÷�
	//showScore(v);

	return 0;
}