#include<iostream>
#include<vector>
#include<string>
using namespace std;



/***

  �������󣨷º�����:���غ������ò��������࣬��ʵ���������Ϊ��������
            ��������ʹ�����ص�()ʱ����Ϊ���ƺ������� ����Ҳ�зº�����
            ������һ���ࡣ
   �ص㣺
	  1.��ʹ��ʱ����������ͨ�����������ã������в����ͷ���ֵ
	  2.�������󳬳���ͨ�����ĸ����������������Լ���״̬
	  3.�������������Ϊ��������

***/


// 1. ��ʹ��ʱ����������ͨ�����������ã������в����ͷ���ֵ
class MyAdd
{

public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}

};

void test00()
{
	MyAdd myadd;  //Ϊ��������
	cout<<myadd(10, 10)<<endl; //�ͺ���ͨ��������һ��


}

// 2.�������󳬳���ͨ�����ĸ����������������Լ���״̬
class MyPrint
{
public:
	MyPrint()
	{
		count = 0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		this->count++;
	}

	int count;  //�ڲ���¼�Լ���״̬

};
//�������ͨ����Ҫ֪�������ö��ٴΣ���Ҫ����ȫ��/��̬������ͳ�Ʊ��棬�������ڲ�ʵ��

void test01()
{
	MyPrint myprint;
	myprint("hello,world");
	myprint("hello,world");
	myprint("hello,world");
	myprint("hello,world");
	cout << "MyPrint���õĴ���: " << myprint.count << endl;

}


// 3.�������������Ϊ�������ݣ��ɼ��º�������
void doPrint(MyPrint &mp, string test)
{
	mp(test);
}
void test02()
{
	MyPrint myPrint;
	doPrint(myPrint,"Hello,c++"); //����������ΪdoPrint��������
	//���������MyPrint�º����Ĵ�ӡ����

}




int main_00()
{
	//test00();
	//test01();
	test02();

	return 0;
}
