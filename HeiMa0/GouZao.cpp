//#include<iostream>
//using namespace std;
//
//
////1构造函数分类及调用
////分类
//// 无参数和有参数构造 (编译器安排的也是无参构造)
//// 普通构造函数和拷贝构造函数（编译器也会提供默认的 ）
//    //若用户定义了拷贝构造函数，c++不会再提供其他构造函数
//
//class Person
//{
//public:
//	//构造函数
//	Person()
//	{
//		cout << "Person的无参构造函数调用" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "Person的有参构造函数调用" << endl;
//	}
//
//	//拷贝构造函数
//	Person(const  Person &p)
//	{
//		//将传入的人身上的所有属性拷贝到我本身对象身上
//		age = p.age;
//		cout << "Person的拷贝构造函数调用" << endl;
//	}
//
//	int age;
//};
//
//
////调用方法：
//void test01()
//{
//	//////括号法
//	//Person p1;  //无参（默认）构造函数的调用
//	//Person p2(18); //有参构造函数调用
//	//Person p3(p2);  //拷贝构造函数的调用  ，将p2拷贝到p3
//	//               //传对象参数时就涉及了拷贝构造函数
//	////注意写默认构造函数时不要加()，
//	////因为Person p1()会让编译器认为是函数声明
//
//	////显示法
//	//Person p1;
//	//Person p2 = Person(18);  //有参构造  
//	//Person p3 = Person(p2);  //拷贝构造
//	//                      //右边是匿名对象，执行后立刻回收
//
//	////隐式转换法
//	//Person p4 = 18;  //相当于Person p4 = Person(18);
//	//Person p5 = p4;  //拷贝构造
//
//
////拷贝构造函数被调用的几种情况
//
////1、使用一个已经创建的对象初始化一个新对象
//	Person p6(20);
//	Person p7(p6);
//
//}
//
////2、值传递的方式给函数传参
//void doWork(Person p)
//{
//
//}
//
//void test02()
//{
//	Person p;
//	doWork(p);  //此时会拷贝一个临时对象副本
//}
//
////3、值方式返回局部对象
//Person dowork2()
//{
//	Person p1;
//	cout << (int*)&p1 << endl;//可以看地址检验是否一样
//	return p1;
//}
//void test03()
//{
//	Person p = dowork2(); //拷贝了一个新的临时对象给p
//	cout << (int*)&p << endl;
//}
//
//int main_5()
//{
//	//test01();
//	//test02();
//	test03();
//	return 0;
//}
//
//
