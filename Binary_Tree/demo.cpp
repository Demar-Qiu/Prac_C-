#include<iostream>
#include<stdlib.h>
#include"Tree.h"
using namespace std;

int main()
{
	int root = 3;  //根结点
	Tree *pTree = new Tree(10,&root);
	int node1 = 5;
	int node2 = 8;
	pTree->AddNode(0, 0, &node1);       //在0号结点插入左孩子
	pTree->AddNode(0, 1, &node2);       //在0号结点插入右孩子

	int node3 = 2;
	int node4 = 6;
	pTree->AddNode(1, 0, &node3);    //插入1的左孩子
	pTree->AddNode(1, 1, &node4);    //插入1的右孩子

	int node5 = 9;
	int node6 = 7;
	pTree->AddNode(2, 0, &node5);    //插入2的左孩子
	pTree->AddNode(2, 1, &node6);    //插入2的右孩子

	int node = 0;
	pTree->DeleteNode(6,&node);
	cout << "node=" << node << endl;   //删除结点6

	pTree->TreeTraverse();

	int *p=pTree->SearchNode(2);   //搜索结点2
	cout << endl <<"node="<< *p << endl;
	


	delete pTree;

	return 0;
}