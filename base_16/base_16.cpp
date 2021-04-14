#include<iostream>
using namespace std;



/* ����ģ��
       ���庯��ģ��display
*/

template<typename T>     //ÿ������ģ�嶨��ǰ����Ҫ�������
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
    display<int>(15);      //ģ�庯��ʵ��������
    display<double>(1.34);
    display<int, string>(5, "hello");
    display<char, 6>('m');       

    return 0;
}
