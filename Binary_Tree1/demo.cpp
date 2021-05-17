#include<stdlib.h>
#include"Tree.h"
#include<iostream>
using namespace std;

/*
   用链表实现的二叉树及其遍历方式
*/


int main()
{
	Node *node1 = new Node();    //定义结点
	node1->index = 1;
	node1->data = 5;

	Node *node2 = new Node();
	node2->index = 2;
	node2->data = 8;

	Node *node3 = new Node();
	node3->index = 3;
	node3->data = 2;

	Node *node4 = new Node();
	node4->index = 4;
	node4->data = 6;

	Node *node5 = new Node();
	node5->index = 5;
	node5->data = 9;

	Node *node6 = new Node();
	node6->index = 6;
	node6->data = 7;

	Tree *tree = new Tree();

	tree->AddNode(0, 0, node1);
	tree->AddNode(0, 1, node2);

	tree->AddNode(1, 0, node3);
	tree->AddNode(1, 1, node4);

	tree->AddNode(2, 0, node5);
	tree->AddNode(2, 1, node6);

	//tree->DeleteNode(2, NULL);  //删除结点

	cout << "前序遍历" << endl;
	tree->PreorderTraversal();  //前序遍历 0134256
	cout << "中序遍历" << endl;
	tree->InorderTraversal();   //中序遍历 3140526
	cout << "后序遍历" << endl;
	tree->PostorderTraversal();   //后序遍历 3415620
	cout << "层序遍历" << endl;
	tree->LevelorderTraversal();   //层序遍历（这里输出的是值）

	delete tree;
	return 0;
}