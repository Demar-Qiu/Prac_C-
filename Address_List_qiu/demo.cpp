#include<stdlib.h>
#include"List.h"
#include<iostream>
#include"Person.h"
using namespace std;

/*  ���Ա�---ͨѶ¼
*        
          ��ϵ����Ϣ������ �绰


*/

int menu()    //�˵�����
{
    //��ʾͨѶ¼���ܲ˵�
    cout << "���ܲ˵�" << endl;
    cout << "1.�½���ϵ��" << endl;
    cout << "2.ɾ����ϵ��" << endl;
    cout << "3.���ͨѶ¼" << endl;
    cout << "4.�˳�ͨѶ¼" << endl;

    cout << "������ѡ��";

    int order = 0;
    cin >> order;

    return order;
}

void createPerson(List *pList)
{
    Node node;
    Person person;
    cout << "������������";
    cin >> node.data.name;  
    cout << "������绰��";
    cin >> node.data.phone;
    pList->ListInsertTail(&node);
}

void deletePerson(List* pList)
{
    Node node;
    Person person;
    cout << "������Ҫɾ���˵�������";
    cin >> node.data.name;
    cout << "������Ҫɾ���˵ĵ绰��";
    cin >> node.data.phone;
    Node temp;
    int index = pList->LocateElem(&node);  //Ҫɾ���Ľڵ��λ��
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
            cout << "�û�ָ��--->>�½���ϵ�ˣ�" << endl;
            createPerson(pList);
            break;
        case 2:
            cout << "�û�ָ��--->>ɾ����ϵ�ˣ�" << endl;
            deletePerson(pList);
            break;
        case 3:
            cout << "�û�ָ��--->>���ͨѶ¼��" << endl;
            pList->ListTraverse();
            break;
        case 4:
            cout << "�û�ָ��--->>�˳�ͨѶ¼��" << endl;
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
