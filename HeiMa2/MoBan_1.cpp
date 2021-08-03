#include<iostream>
#include<string>
using namespace std;


/* ��ѡ�������㷨ʵ��ͨ�ö������������ĺ���
/  �ֱ����char ���顢int ����  */


//��������ģ��
template<typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}


//�����㷨
template<class T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		{
			 //�����±�max��i��Ԫ��
			mySwap(arr[i], arr[max]);
		}
	}

}

//�ṩ��ӡ����ģ��
template<typename T>
void printArray(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
		cout << endl;
	}
}

void test04()
{
	//����char����
	char charArr[] = "badcfe";
	int num = sizeof(charArr) / sizeof(charArr[0]);
	mySort(charArr, num);
	printArray(charArr, num);
}

void test05()
{
	//����int����
	int intArr[] = { 5,2,6,3,4,9,7 };
	int num = sizeof(intArr) / sizeof(intArr[0]);
	mySort(intArr, num);
	printArray(intArr, num);
}

class Men
{
public:
	Men(int age, string name, bool m_issing) :m_Age(age), m_Name(name), m_isSing(m_issing) {}
	friend bool operator==(Men& m1, Men& m2);
	//friend ostream& operator<<(ostream&out, Men& m);
	//��Ա����ʵ��
	//bool operator==(const Men& men)
	//{
	//	if ((this->m_Age == men.m_Age) && (this->m_Name == men.m_Name)&&(this->m_isSing == men.m_isSing))
	//	{
	//		return true;
	//	}
	//	return false;
	//}
private:
	int m_Age;
	string m_Name;
	bool m_isSing;

};

//��Ԫ����ʵ��
bool operator==(Men& m1, Men& m2)
{
	if ((m1.m_Age == m2.m_Age) && (m1.m_isSing == m2.m_isSing) && (m1.m_Name == m2.m_Name))
	{
		return true;
	}
	return false;
}

int main_1()
{
	/*test04();
	test05();
	return 0;*/
	Men m1(15, "zhangzi", false);
	Men m2(15, "zhangzi", false);
	if (m1 == m2)
	{
		cout << "m1==m2" << endl;
	}
	else
	{
		cout << "m1!=m2" << endl;
	}
	return 0;

}



