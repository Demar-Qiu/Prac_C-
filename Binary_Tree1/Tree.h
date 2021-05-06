#pragma once
#include"Node.h"
#include<stdio.h>

class Tree
{
public:
	Tree();
	~Tree();
	Node *SearchNode(int nodeIndex);  //搜索结点
	bool AddNode(int nodeIndex, int direction, Node *pNode);  //添加结点
	bool DeleteNode(int nodeIndex, Node *pNode);  //删除结点
	void PreorderTraversal();    //前序遍历
	void InorderTraversal();    //中序遍历
	void PostorderTraversal();  //后序遍历

private:
	Node *m_pRoot; 

};