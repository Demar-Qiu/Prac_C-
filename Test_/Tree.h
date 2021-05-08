#pragma once
#include"Node.h"

class Tree
{
	Tree();    //创建树
	~Tree();   //销毁树
	Node* SearchNode(int nodeIndex);
	bool AddNode(int nodeIndex, int direction,Node* pNode);
	bool DeleteNode(int nodeIndex, Node* pNode);
	void PreorderTraversal();
	void InorderTraversal();
	void PostorderTraversal();


private:
	Node* m_pRoot;  //树的第一个结点也就是根节点 

};