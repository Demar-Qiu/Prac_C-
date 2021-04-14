#include<iostream>
using namespace std;



/* 函数模板
       定义函数模板display
*/

template<typename T>     //每个函数模板定义前都不要忘记这句
void display(T a)
{
    cout << a << endl;
}

template<typename T,class S>
void display(T t, S s)
{
    cout << t << endl;
    cout << s << endl;
}

template<typename T,int KSize>
void display(T a)
{
    for (int i = 0; i < KSize; i++)
    {
        cout << a << endl;
    }
}

int main_a()
{
    display<int>(15);      //模板函数实现了重载
    display<double>(1.34);
    display<int, string>(5, "hello");
    display<char, 6>('m');       

    return 0;
}
