#include<iostream>
#include<string>
using namespace std;


/* 用选择排序算法实现通用对数组进行排序的函数
/  分别测试char 数组、int 数组  */


//交换函数模板
template<typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}


//排序算法
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
			 //交换下标max和i的元素
			mySwap(arr[i], arr[max]);
		}
	}

}

//提供打印数组模板
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
	//测试char数组
	char charArr[] = "badcfe";
	int num = sizeof(charArr) / sizeof(charArr[0]);
	mySort(charArr, num);
	printArray(charArr, num);
}

void test05()
{
	//测试int数组
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
	//成员函数实现
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

//友元函数实现
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



