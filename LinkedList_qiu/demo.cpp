#include<stdlib.h>
#include"List.h"
#include<iostream>
using namespace std;

/* ���Ա�---������ 

   ��Ա�����������������������Ա���ա��пա���ȡ���ȡ�
                 ��ȡָ��Ԫ�ء���λԪ���±ꡢ��ȡǰ�������
				 �ڵ�i��λ�ò���Ԫ�ء�ɾ����i��λ�õ�Ԫ�ء�����

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
	pList->ListInsertHead(&node4); */ //��ʱ�������Ӧ����6543
	
	pList->ListInsertTail(&node1);
	pList->ListInsertTail(&node2);
	pList->ListInsertTail(&node3);
	pList->ListInsertTail(&node4);//��ʱ�������Ӧ����3456

	pList->ListInsert(0, &node5); //��node5����λ��0��
	//pList->ListDelete(0, &temp); //ɾ��node5�浽temp��

	pList->PriorElem(&node3, &temp);//ȡnode3��ǰ��

	//pList->GetElem(2, &temp);  //��ȡλ��2����Ԫ��

	pList->ListTraverse();

	cout << "temp=" << temp.data << endl;

	delete pList;
	pList = NULL;

	return 0;
}

