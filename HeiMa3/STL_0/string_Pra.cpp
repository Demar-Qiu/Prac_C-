#include<string>
#include<iostream>
using namespace std;


/**
	string本质上是一个类，类内部封装了char*,是一个char*的容器
	
	    内部有许多成员方法：如copy delete replace insert等
		string管理char*所分配的内存，不用担心越界等问题

**/


//string的构造函数,以及赋值
void  string01()
{
	string s1; //默认构造（为空）

	const char* str = "hello world";
	//string s2(s1);
	string s2(str);
	cout << "s2= " << s2 << endl;

	string s3("hello s++", 4);
	cout << "s3= " << s3 << endl;

	string s4(10, 'a');
	cout <<"s4=" <<s4 << endl;

	//string赋值,除了常规的还有assign函数
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

//string拼接
void string02()
{
	string str1 = "我";
	str1 += "爱游戏";
	cout << "str1= " << str1 << endl;
	string str2 = ",比如 LOL";
	str1 += str2;
	cout << "str1= " << str1 << endl;
	string str3 = "I ";
	str3.append("love");
	cout << "str3= " << str3 << endl;
	str3.append(str2, 5, 8); //截取str2的LOL字符拼到str3后边
	cout << "str3= " << str3 << endl;

}


//字符串查找和替换
void string03()
{
	string str1 = "abcdefg";
	int pos = str1.find("de");  //返回位置的下标位置,否则-1
	cout << "pos= " << pos << endl;
	//还有rfind是 从右往左查找

	str1.replace(1, 3, "1234");  //1234替换掉1-3位置的字符
	cout << "str1= " << str1 << endl;

}

//string比较(逐个对比ASCLL值)，一般只用于比较是否相等
void string04()
{
	string s1 = "mello";
	string s2 = "hello";
	//cstring中对应是strcmp
	if (s1.compare(s2) == 0)
	{
		cout << "相等" << endl;
	}
	else if (s1.compare(s2) > 0)
		cout << "s1>s2" << endl;
	else
		cout << "s1<s2" << endl;

}

//string存取  两种方式
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

//string插入和删除
void string06()
{
	string s = "morden";

	s.insert(1, "222");  //从哪个位置插入
	cout << "s= " << s<<endl;
	s.erase(1, 3);
	cout << "s= " << s << endl;
}

//string子串 substr截取子串
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

