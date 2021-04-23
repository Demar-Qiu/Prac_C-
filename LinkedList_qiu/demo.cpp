#include<stdlib.h>
#include"List.h"
#include<iostream>
using namespace std;

/* 线性表---单链表 

   成员函数包括：创建、销毁线性表、清空、判空、获取长度、
                 获取指定元素、定位元素下标、获取前驱、后继
				 在第i个位置插入元素、删除第i个位置的元素、遍历

*/

int main()
{
	//Node* node1 = new Node;
	//node1->data = 3;
	Node node1;
	node1.data = 3;
	Node node2;
	node2.data = 4;
	Node node3;
	node3.data = 5;
	Node node4;
	node4.data = 6;

	Node node5;
	node5.data = 7;

	Node temp;

	List* pList = new List();

	/*pList->ListInsertHead(&node1);
	pList->ListInsertHead(&node2);
	pList->ListInsertHead(&node3);
	pList->ListInsertHead(&node4); */ //此时遍历输出应该是6543
	
	pList->ListInsertTail(&node1);
	pList->ListInsertTail(&node2);
	pList->ListInsertTail(&node3);
	pList->ListInsertTail(&node4);//此时遍历输出应该是3456

	pList->ListInsert(0, &node5); //将node5插在位置0处
	//pList->ListDelete(0, &temp); //删除node5存到temp中

	pList->PriorElem(&node3, &temp);//取node3的前驱

	//pList->GetElem(2, &temp);  //获取位置2处的元素

	pList->ListTraverse();

	cout << "temp=" << temp.data << endl;

	delete pList;
	pList = NULL;

	return 0;
}

