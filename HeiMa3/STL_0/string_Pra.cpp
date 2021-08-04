#include<string>
#include<iostream>
using namespace std;


/**
	string��������һ���࣬���ڲ���װ��char*,��һ��char*������
	
	    �ڲ�������Ա��������copy delete replace insert��
		string����char*��������ڴ棬���õ���Խ�������

**/


//string�Ĺ��캯��,�Լ���ֵ
void  string01()
{
	string s1; //Ĭ�Ϲ��죨Ϊ�գ�

	const char* str = "hello world";
	//string s2(s1);
	string s2(str);
	cout << "s2= " << s2 << endl;

	string s3("hello s++", 4);
	cout << "s3= " << s3 << endl;

	string s4(10, 'a');
	cout <<"s4=" <<s4 << endl;

	//string��ֵ,���˳���Ļ���assign����
	string str1;
	str1.assign("hello c++");
	cout << "str1=" << str1 << endl;

	string str2;
	str2.assign("hello c++", 5);
	cout << "str2=" << str2 << endl;

	string str3;
	str3.assign(str2);
	cout << "str2=" << str2 << endl;
}

//stringƴ��
void string02()
{
	string str1 = "��";
	str1 += "����Ϸ";
	cout << "str1= " << str1 << endl;
	string str2 = ",���� LOL";
	str1 += str2;
	cout << "str1= " << str1 << endl;
	string str3 = "I ";
	str3.append("love");
	cout << "str3= " << str3 << endl;
	str3.append(str2, 5, 8); //��ȡstr2��LOL�ַ�ƴ��str3���
	cout << "str3= " << str3 << endl;

}


//�ַ������Һ��滻
void string03()
{
	string str1 = "abcdefg";
	int pos = str1.find("de");  //����λ�õ��±�λ��,����-1
	cout << "pos= " << pos << endl;
	//����rfind�� �����������

	str1.replace(1, 3, "1234");  //1234�滻��1-3λ�õ��ַ�
	cout << "str1= " << str1 << endl;

}

//string�Ƚ�(����Ա�ASCLLֵ)��һ��ֻ���ڱȽ��Ƿ����
void string04()
{
	string s1 = "mello";
	string s2 = "hello";
	//cstring�ж�Ӧ��strcmp
	if (s1.compare(s2) == 0)
	{
		cout << "���" << endl;
	}
	else if (s1.compare(s2) > 0)
		cout << "s1>s2" << endl;
	else
		cout << "s1<s2" << endl;

}

//string��ȡ  ���ַ�ʽ
void string05()
{
	string s = "thank";
	for (int i = 0; i < s.size(); i++)
	{
		cout << s[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < s.size(); i++)
	{
		cout << s.at(i) << " ";
	}
	

}

//string�����ɾ��
void string06()
{
	string s = "morden";

	s.insert(1, "222");  //���ĸ�λ�ò���
	cout << "s= " << s<<endl;
	s.erase(1, 3);
	cout << "s= " << s << endl;
}

//string�Ӵ� substr��ȡ�Ӵ�
void string07()
{
	string str = "efghi";    
	string subStr = str.substr(1, 3);
	cout << "subStr=" << subStr << endl;

	string email = "QiuLong@163.com";
	int p = email.find("@");
	if (p != -1)
	{
		string usrName = email.substr(0, p);
		cout << usrName << endl;
	}

}

int main_01()
{
	//string01();
	//string02();
	//string03();
	//string04();
	//string05();
	//string06();
	string07();

	return 0; 
}

