#include<iostream>
#include<stdlib.h>
#include"List.h"
using namespace std;



/* 线性表---顺序表 (数组)

 3 5 7 9 1 8

 前驱(给定元素的前一个)   后继（给定元素的后一个）
 
 内容包括：创建线性表、销毁、清空、判空、获取长度、获取指定元素
           定位、获取指定元素的前驱、获取指定元素的后继、
           在第i个位置插入元素、在第i个位置中删除元素、遍历元素

*/

int main()
{
    int e1 = 3;
    int e2 = 5;
    int e3 = 7;
    int e4 = 2;
    int e5 = 9;
    int e6 = 1;
    int e7 = 8;
    int temp = 0;

    List* list1 = new List(10);

    cout << "length:" << list1->ListLength() << endl;

    list1->ListInsert(0, &e1);  //插入

    cout << "length:" << list1->ListLength() << endl;
    list1->ListInsert(1, &e2);
    list1->ListInsert(2, &e3);
    list1->ListInsert(3, &e4);
    list1->ListInsert(4, &e5);
    list1->ListInsert(5, &e6);
    list1->ListInsert(6, &e7);

    list1->ListDelete(0, &temp);  //删除

    if (!list1->ListEmpty())
    {
        cout << "not empty" << endl;
    }

    list1->ClearList();  

    if (list1->ListEmpty())
    {
        cout << "empty" << endl;
    }

    list1->ListTraverse(); 

    
    cout << "#"<<temp << endl;
     


    delete list1;

    return 0;
}


