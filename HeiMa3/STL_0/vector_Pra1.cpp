#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>


void printVector(vector<int>&v)
{
	//for(vector<int>::iterator it=v.begin();it!=v.end();++i)
	for (auto i : v)
	{
		cout << i << " ";
	}
	cout << endl;

}

//vector的构造函数
void test10()
{
	vector<int>u1;  //默认无参构造（之后再赋值插入）
	for (int i = 0; i < 10; i++)
	{
		u1.push_back(i);
	}
	printVector(u1);

	vector<int>u2(u1.begin(), u1.end());
	printVector(u2);

	vector<int>u3(10, 22);
	printVector(u3);

	vector<int>u4(u3);
	printVector(u4);
}


//vector赋值(=,assign)
void test11()
{
	vector<int>v1;
	for (int i = 1; i < 9; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	vector<int>v2;
	v2 = v1;
	printVector(v2);

	//assign
	vector<int>v3;
	v3.assign(v2.begin(), v2.end());
	printVector(v3);

	vector<int>v4;
	v4.assign(10,0);
	printVector(v4);

}


//vector容量和大小(capacity,size)
void test12()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	if (v1.empty())
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1不为空" << endl;
		cout << "v1容量为：" << v1.capacity() << endl;
		cout << "v1大小为：" << v1.size() << endl;
	}
	//重新指定大小
	v1.resize(15);  //若指定过长则多余的默认为0填充
	printVector(v1);
	v1.resize(5);
	printVector(v1);
}

//vector插入和删除（尾插和尾删push_back，pop_back
//                迭代器指向插入insert和删除指向erase、清楚全部元素clear）
void test13()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	printVector(v);

	v.pop_back();
	printVector(v);
	
	//注意参数是迭代器
	v.insert(v.begin(), 55);//在首位插入55
	printVector(v);
	v.erase(v.begin());
	printVector(v);
	v.clear();

}

//vector数据存取
void test14()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < v.size(); i++)
	{
		cout << v.at(i) <<" ";  //执行了对下标越界的检查
	}
	cout << endl;

	//获取第一个元素和最后一个元素
	cout << "the first element: " << v.front() << endl;
	cout << "the last element: " << v.back() << endl;
}

//容器交换 v1.swap(v2) //交换v1 v2内容，实际用途达到收缩内存的效果


//预留空间（reserve）
void test15()
{
	vector<int>v;

	//利用reserve来预留空间，预留100000空间
	v.reserve(100000);//此时num变为1

	int num = 0; //统计内存开辟的次数
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];  //每次开辟都是新的首地址，此时要开30次
			num++;
		}
	}

	cout << "num= " << num << endl;
}


int main()
{
	//test10();
	//test11();
	//test12();
	//test13();
	//test14();
	 test15();

	return 0;
}