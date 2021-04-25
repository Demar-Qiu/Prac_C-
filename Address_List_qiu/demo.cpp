#include<stdlib.h>
#include"List.h"
#include<iostream>
#include"Person.h"
using namespace std;

/*  线性表---通讯录
*        
          联系人信息：姓名 电话


*/

int menu()    //菜单函数
{
    //显示通讯录功能菜单
    cout << "功能菜单" << endl;
    cout << "1.新建联系人" << endl;
    cout << "2.删除联系人" << endl;
    cout << "3.浏览通讯录" << endl;
    cout << "4.退出通讯录" << endl;

    cout << "请输入选择：";

    int order = 0;
    cin >> order;

    return order;
}

void createPerson(List *pList)
{
    Node node;
    Person person;
    cout << "请输入姓名：";
    cin >> node.data.name;  
    cout << "请输入电话：";
    cin >> node.data.phone;
    pList->ListInsertTail(&node);
}

void deletePerson(List* pList)
{
    Node node;
    Person person;
    cout << "请输入要删除人的姓名：";
    cin >> node.data.name;
    cout << "请输入要删除人的电话：";
    cin >> node.data.phone;
    Node temp;
    int index = pList->LocateElem(&node);  //要删除的节点的位序
    pList->ListDelete(index,&temp);
}

int main()
{
    int userOrder = 0;

    List* pList = new List();

    while (userOrder != 4)
    {
        userOrder = menu();
        switch (userOrder)
        {
        case 1:
            cout << "用户指令--->>新建联系人：" << endl;
            createPerson(pList);
            break;
        case 2:
            cout << "用户指令--->>删除联系人：" << endl;
            deletePerson(pList);
            break;
        case 3:
            cout << "用户指令--->>浏览通讯录：" << endl;
            pList->ListTraverse();
            break;
        case 4:
            cout << "用户指令--->>退出通讯录：" << endl;
            break;

        }
    }


    delete pList;
    pList = NULL;





    //Node node1;
    //node1.data.name = "derozan";
    //node1.data.phone = "336400";
    //Node node2;
    //node2.data.name = "kobe";
    //node2.data.phone = "242424";

    //List* pList = new List();

    //pList->ListInsertTail(&node1);
    //pList->ListInsertTail(&node2);

    //pList->ListTraverse();
}
