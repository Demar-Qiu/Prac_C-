#include<iostream>
using namespace std;

//深拷贝和浅拷贝

class Person
{
public:
	//构造函数
	Person()
	{
		cout << "Person的无参构造函数调用" << endl;
	}
	Person(int a,int height,int count)
	{
		m_Age = a;
		m_Height = new int(height);
		m_iCount = count;
		m_pArr = new int[m_iCount];
		for (int i=0; i < m_iCount; i++)
		{
			m_pArr[i] = i;
		}
		cout << "Person的有参构造函数调用" << endl;
	}

	///自己写拷贝构造函数解决浅拷贝带来的问题
	Person(const Person &p)
	{
		cout << "拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;  //这里是编译器的默认拷贝构造写的
		//改成深拷贝
		m_Height = new int(*p.m_Height); //重新在堆区申请一块内存复制内容
		m_iCount = p.m_iCount;
		m_pArr = new int[m_iCount];
		for (int i=0; i < m_iCount; i++)
		{
			m_pArr[i] = p.m_pArr[i];
		}
	}


	//析构函数
	~Person()
	{
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person的析构构造函数调用" << endl;
	}

	void printArr()
	{
		for (int i=0; i < m_iCount; i++)
		{
			cout << m_pArr[i]<<endl;
		}
	}

	int m_Age;
	//注意此时含有指针成员!!
	int* m_Height;  
	int m_iCount;
	int* m_pArr; 

};

void test00()
{
	Person p1(18,167,6);

	cout << "p1的年龄：" << p1.m_Age <<" 身高为："<<*p1.m_Height<< endl;

	Person p2(p1);//根据编译器提供的拷贝构造函数，做浅拷贝操作 
          
	//之后在调用析构函数释放内存时，先释放p2,里面指针指向的堆区内存释放；
	//然后p1执行析构函数，p1又一次释放了同一块堆中的内存，导致重复释放。

	cout << "p2的年龄：" << p2.m_Age << " 身高为："<<*p2.m_Height << endl;
	p1.printArr();
	p2.printArr();

} 

int main_6()
{
	test00();
	return 0;
}



