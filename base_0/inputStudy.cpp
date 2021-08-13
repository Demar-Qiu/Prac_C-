#include<iostream>
#include<assert.h>
#include<string>
using namespace std;


/****

   关于c++的基本输入
   输入过程：
         把输入加载到缓冲区，然后对缓冲区的字符进行读取，
		 不同函数对缓冲区数据的处理方法不同
		 主要分：cin、cin.get()、cin.getline()
****/


//1. cin 结束条件：\n(换行符), 空格, \t(制表符tab)
//    当cin>>遇到缓冲区中的以上符号时会结束当前输入，并舍弃这些符号，
//    后续的输入都留在cin中，下一次输入>>会舍去符号开始提取后续输入
void test_00()
{
	char a[10];
	char b[10];
	int c; int d;
	cout << "***********开始测试输入： ***********" << endl;
	cin >> a;
	cin >> b;
	cin >> c >> d;

	//assert(!cin.fail());
	//当发生或仅当发生什么状态（如下）时返回true
	//cin.good流对象正常；cin.bad发生无法恢复的错误；cin.fail发生可恢复的错误
	//cin.eof()检测到异常的文件结束标志
	
	//cout << a << endl;
	cout << a <<endl<< b << endl;
	cout << c << endl << d << endl;
	
}


//2. cin.get()或一参数cin.get(a)
//   结束条件：输入字符足够后回车
//     说明：这个是单字符的输入，用途是输入一个字符，把它的ASCAII码存入到a中
//     与cin不同，其在遇到\n(换行符),空格,\t(制表符tab)时它们不会舍弃，继续留在缓冲区中
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
	////空格是32  回车符是10


	//二参数 cin.get(arrayname,size) 前者是char[]类型，不可为string;size是允许输入的最大长度
	char e[10];
	cin.get(e,15);
	cout << e << endl; //输入未超出10，正常输出最后补'\0'
	cout << sizeof(e) << endl; 
	//实际输入长度超出10，未超出15,数组自动扩张可以输出但是报错，而sizeof计算仍为10
	//实际输入长度超出10，也超出15，自动扩张可以输出前14个字符+'\0'，但也会报错


	//三参数，多了一个s，当输入遇到字符s时会结束
	char g[10];
	cin.get(g, 10, '.');
	cout << g;

}


//3.cin.getline()  这里的是istream中的getline,还有string类中的成员函数getling()
//  和cin.get大致相同，只有二、三参数两类用法

void test_02()
{
	//  区别1：cin.get()遇到回车会结束当前输入，且不会删除缓冲区中的换行符\n
	//        cin.getline()当遇到回车会结束当前输入，但会删除缓存区中的换行符

	char aa[10];
	char bb;
	cin.get(aa, 10);
	cin.get(bb);
	cout << aa << endl << int(bb) << endl; //bb为10,说明为缓冲区中的换行符

	char cc[10];
	char dd;
	cin.getline(cc, 10);
	cin.get(dd);
	cout << cc << endl << int(dd) << endl; //dd此时接收不到换行符了


}
void test_03()
{

// 区别2：cin.get（arrayname, size,s）当遇到s时会结束输入，但不会删除缓冲区中的字符s
//        cin.getline(arrayname,size,s)当遇到s时会结束输入，并把s从缓冲区中删除

	char a[10];
	char b;
	cin.get(a, 10, ' ');
	cin.get(b);
	cout << a << endl << int(b);  //遇到空格后结束，空格存入b,也可在变量窗口可发现b为空格符
	cout << endl;

	char c[10];  
	char d;
	cin.getline(c, 10, ' ');
	cin.get(d);
	cout << c << endl << int(d);  //此时输出说明删除了空格符，输出的d为换行符

}


//简单运用---以任何符号作为输入分隔符
// 输入五个学生名字，每个学生名字不超过10个字符，输入时名字之间用逗号分隔
// 输出 五个名字存储并换行输出
void test_app()
{
	int i;
	char a[5][10];
	for (i = 0;i < 4; i++)
	{
		cin.getline(a[i], 10, ',');  //前四个用逗号分隔好输入，存入a这个二维数组
	}
	cin.getline(a[i], 10);  //此时是最后一个名字因为要回车，所以单独拿出来

	for (i = 0; i < 5; i++)
	{
		cout << a[i] << endl;
	}

}


void win_io(istream &input)
{
	string line;
	cout << "任意输入一些字符，按回车结束" << endl;
	getline(input, line);
	cout << "从控制窗口读出的内容为: " << line << endl;

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