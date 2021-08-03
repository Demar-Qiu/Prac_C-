#include<iostream>
#include<string>
#include<ctime>
using namespace std;


struct Student
{
	string sName;
	int score;

};

struct Teacher
{
	string tName;
	struct Student sArray[5];
};



//����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(struct Teacher tArray[],int len)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i]; 
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];

			//tArray[i].sArray[j].score = 60;
			int random = rand() % 61 + 40;
			tArray[i].sArray[j].score = random;
		
		}
	}
}

void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ������" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "ѧ�������� " << tArray[i].sArray[j].sName <<
				" ���Է����� " << tArray[i].sArray[j].score << endl;
		}
	}
}

struct Hero
{
	string name;
	int age;
	string sex;

};


//ð������
void bubbleSort(struct Hero heroArray[],int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j]= heroArray[j+1];
				heroArray[j + 1] = temp;
			}
		}
	}

}

void printHero(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "������" << heroArray[i].name << " ���䣺" << heroArray[i].age
			<< " �Ա�" << heroArray[i].sex << endl;
	}

}





int main_1()
{
	srand((unsigned int)time(NULL));

	struct Teacher tArray[3];
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	printInfo(tArray, len);


	struct Hero heroArray[5] = {
	{"����",24,"��"},
	{"����",22,"��"},
	{"�ŷ�",20,"��"},
	{"����",21,"��"},
	{"����",19,"Ů"},
	};
	int size = sizeof(heroArray) / sizeof(heroArray[0]);
	for (int i = 0; i < size; i++)
	{
		cout << "������" << heroArray[i].name << " ���䣺" << heroArray[i].age
			<< " �Ա�" << heroArray[i].sex << endl;
	}

	bubbleSort(heroArray, size);
	cout << "������ӡ�� " << endl;
	printHero(heroArray, size);

	return 0;
}


