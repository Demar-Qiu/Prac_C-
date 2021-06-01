#pragma once
#include"Node1.h"
#include<stdio.h>

/* 二叉树的链表表示 */
/*
   注意这里因为是二叉树，每个结点有各自的索引，根据索引来搜索

   并且主要通过节点类来完成，搜索和遍注意和单链表一个接一个next区分，
   二叉树有左右孩子和父亲，所以不同。

*/
class Tree1
{
public:
	Tree1();
	~Tree1();
	Node1* SearchNode(int nodeIndex);
	bool AddNode(int nodeIndex, int direction, Node1* pNode);  //添加结点
	bool DeleteNode(int nodeIndex, Node1* pNode);  //删除结点
	void PreorderTraversal();  //前序遍历
	void InorderTraversal();    //中序遍历
	void PostorderTraversal();  //后序遍历
	void LevelorderTraversal(); //层序遍历
private:
	Node1* m_pRoot;
};