#include<iostream>
#include<assert.h>
#include<string>
using namespace std;


/****

   ����c++�Ļ�������
   ������̣�
         ��������ص���������Ȼ��Ի��������ַ����ж�ȡ��
		 ��ͬ�����Ի��������ݵĴ�������ͬ
		 ��Ҫ�֣�cin��cin.get()��cin.getline()
****/


//1. cin ����������\n(���з�), �ո�, \t(�Ʊ��tab)
//    ��cin>>�����������е����Ϸ���ʱ�������ǰ���룬��������Щ���ţ�
//    ���������붼����cin�У���һ������>>����ȥ���ſ�ʼ��ȡ��������
void test_00()
{
	char a[10];
	char b[10];
	int c; int d;
	cout << "***********��ʼ�������룺 ***********" << endl;
	cin >> a;
	cin >> b;
	cin >> c >> d;

	//assert(!cin.fail());
	//���������������ʲô״̬�����£�ʱ����true
	//cin.good������������cin.bad�����޷��ָ��Ĵ���cin.fail�����ɻָ��Ĵ���
	//cin.eof()��⵽�쳣���ļ�������־
	
	//cout << a << endl;
	cout << a <<endl<< b << endl;
	cout << c << endl << d << endl;
	
}


//2. cin.get()��һ����cin.get(a)
//   ���������������ַ��㹻��س�
//     ˵��������ǵ��ַ������룬��;������һ���ַ���������ASCAII����뵽a��
//     ��cin��ͬ����������\n(���з�),�ո�,\t(�Ʊ��tab)ʱ���ǲ����������������ڻ�������
void test_01()
{
	char a, b, c, d;
	//a = cin.get();
	//b = cin.get();
	//c = cin.get();
	//d = cin.get();
	///*cin.get(a); cin.get(b);
	//cin.get(c); cin.get(d);*/
	//cout << int(a) << "," << int(b) << "," << int(c) << "," << int(d) << endl;
	//cout << a << "," << b << "," << c << "," << d << endl;
	////�ո���32  �س�����10


	//������ cin.get(arrayname,size) ǰ����char[]���ͣ�����Ϊstring;size�������������󳤶�
	char e[10];
	cin.get(e,15);
	cout << e << endl; //����δ����10������������'\0'
	cout << sizeof(e) << endl; 
	//ʵ�����볤�ȳ���10��δ����15,�����Զ����ſ���������Ǳ�����sizeof������Ϊ10
	//ʵ�����볤�ȳ���10��Ҳ����15���Զ����ſ������ǰ14���ַ�+'\0'����Ҳ�ᱨ��


	//������������һ��s�������������ַ�sʱ�����
	char g[10];
	cin.get(g, 10, '.');
	cout << g;

}


//3.cin.getline()  �������istream�е�getline,����string���еĳ�Ա����getling()
//  ��cin.get������ͬ��ֻ�ж��������������÷�

void test_02()
{
	//  ����1��cin.get()�����س��������ǰ���룬�Ҳ���ɾ���������еĻ��з�\n
	//        cin.getline()�������س��������ǰ���룬����ɾ���������еĻ��з�

	char aa[10];
	char bb;
	cin.get(aa, 10);
	cin.get(bb);
	cout << aa << endl << int(bb) << endl; //bbΪ10,˵��Ϊ�������еĻ��з�

	char cc[10];
	char dd;
	cin.getline(cc, 10);
	cin.get(dd);
	cout << cc << endl << int(dd) << endl; //dd��ʱ���ղ������з���


}
void test_03()
{

// ����2��cin.get��arrayname, size,s��������sʱ��������룬������ɾ���������е��ַ�s
//        cin.getline(arrayname,size,s)������sʱ��������룬����s�ӻ�������ɾ��

	char a[10];
	char b;
	cin.get(a, 10, ' ');
	cin.get(b);
	cout << a << endl << int(b);  //�����ո��������ո����b,Ҳ���ڱ������ڿɷ���bΪ�ո��
	cout << endl;

	char c[10];  
	char d;
	cin.getline(c, 10, ' ');
	cin.get(d);
	cout << c << endl << int(d);  //��ʱ���˵��ɾ���˿ո���������dΪ���з�

}


//������---���κη�����Ϊ����ָ���
// �������ѧ�����֣�ÿ��ѧ�����ֲ�����10���ַ�������ʱ����֮���ö��ŷָ�
// ��� ������ִ洢���������
void test_app()
{
	int i;
	char a[5][10];
	for (i = 0;i < 4; i++)
	{
		cin.getline(a[i], 10, ',');  //ǰ�ĸ��ö��ŷָ������룬����a�����ά����
	}
	cin.getline(a[i], 10);  //��ʱ�����һ��������ΪҪ�س������Ե����ó���

	for (i = 0; i < 5; i++)
	{
		cout << a[i] << endl;
	}

}


void win_io(istream &input)
{
	string line;
	cout << "��������һЩ�ַ������س�����" << endl;
	getline(input, line);
	cout << "�ӿ��ƴ��ڶ���������Ϊ: " << line << endl;

}


int main()
{
	//test_00();
	//test_01();
	//test_02();
	//test_03();
	//test_app();
	win_io(cin);

	return 0;
}