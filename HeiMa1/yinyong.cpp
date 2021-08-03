#include<iostream>
#include<string>
using namespace std;



/* 引用的本质就是指针常量（指针指向不可修改，指向的值可修改） */

void func(int& ref)
{
	ref = 100;
}





int main()
{
	int a = 10;

	//相当于自动转换为int* const ref= &a;
	int& ref = a;
	ref = 20;//内部发现ref是引用，自动帮我们转换为*ref=20;

	cout << "a: " << a << endl;
	cout << "ref: " << ref << endl;

	func(a);
	cout << "ref: " << ref << endl;
	return 0;

}