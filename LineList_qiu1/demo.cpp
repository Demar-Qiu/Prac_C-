#include<iostream>
#include<stdlib.h>
#include"List.h"
using namespace std;



/* ���Ա�---˳��� (����)    ������������

 3 5 7 9 1 8

 ǰ��(����Ԫ�ص�ǰһ��)   ��̣�����Ԫ�صĺ�һ����
 
 ���ݰ������������Ա����١���ա��пա���ȡ���ȡ���ȡָ��Ԫ��
           ��λ����ȡָ��Ԫ�ص�ǰ������ȡָ��Ԫ�صĺ�̡�
           �ڵ�i��λ�ò���Ԫ�ء��ڵ�i��λ����ɾ��Ԫ�ء�����Ԫ��

*/

int main()
{
    Coordinate e1(3,5);
    Coordinate e2(5,7);
    Coordinate e3(6,8);
    //int e4 = 2;
    //int e5 = 9;
    //int e6 = 1;
    //int e7 = 8;
    //int temp = 0;
    Coordinate temp(0, 0);


    List* list1 = new List(10);

    cout << "length:" << list1->ListLength() << endl;

    list1->ListInsert(0, &e1);  //����

    cout << "length:" << list1->ListLength() << endl;
    list1->ListInsert(1, &e2);
    list1->ListInsert(2, &e3);
    list1->ListTraverse();
    //list1->ListInsert(3, &e4);
    //list1->ListInsert(4, &e5);
    //list1->ListInsert(5, &e6);
    //list1->ListInsert(6, &e7);

    //list1->GetElem(0,&temp)  //��ȡ�±�Ϊ��Ԫ��
    //list1->LocateElem(&temp);   //��ȡԪ���±�


    list1->PriorElem(&e3, &temp);   //��ȡǰ��Ԫ��
    cout << "temp:" << temp << endl;

    list1->ListDelete(0, &temp);  //ɾ��

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

   
    cout << "#"<<temp << endl;   //ɾ����Ԫ��
     


    delete list1;

    return 0;
}


