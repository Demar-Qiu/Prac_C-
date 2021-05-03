#include<iostream>
#include<stdlib.h>
#include"Tree.h"
using namespace std;

int main()
{
	int root = 3;  //�����
	Tree *pTree = new Tree(10,&root);
	int node1 = 5;
	int node2 = 8;
	pTree->AddNode(0, 0, &node1);       //��0�Ž���������
	pTree->AddNode(0, 1, &node2);       //��0�Ž������Һ���

	int node3 = 2;
	int node4 = 6;
	pTree->AddNode(1, 0, &node3);    //����1������
	pTree->AddNode(1, 1, &node4);    //����1���Һ���

	int node5 = 9;
	int node6 = 7;
	pTree->AddNode(2, 0, &node5);    //����2������
	pTree->AddNode(2, 1, &node6);    //����2���Һ���

	int node = 0;
	pTree->DeleteNode(6,&node);
	cout << "node=" << node << endl;   //ɾ�����6

	pTree->TreeTraverse();

	int *p=pTree->SearchNode(2);   //�������2
	cout << endl <<"node="<< *p << endl;
	


	delete pTree;

	return 0;
}