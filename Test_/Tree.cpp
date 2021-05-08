#include"Tree.h"
#include<iostream>
using namespace std;

Tree::Tree()
{
	m_pRoot = new Node();
}



Node* Tree::SearchNode(int nodeIndex)
{
	return m_pRoot->SearchNode(nodeIndex);
}

bool Tree::AddNode(int nodeIndex, int direction, Node* pNode) //添加结点的操作
{
	Node* temp = SearchNode(nodeIndex); //先找到要添加的结点 
	if (temp == NULL)
	{
		return false;
	}

	Node* node = new Node();
	if (node == NULL)
	{
		return false;
	}
	node->index = pNode->index;
	node->data = pNode->data;

	if (direction == 0)
	{
		temp->pLChild = node;
	}
	if (direction == 1)
	{
		temp->pRChild = node;
	}

}

bool Tree::DeleteNode(int nodeIndex, Node* pNode) //删除结点
{
	Node* temp = SearchNode(nodeIndex); //先找到要删除的结点 
	if (temp == NULL)
	{
		return false;
	}
	if (pNode != NULL)     //取出要删除的结点
	{
		pNode->data = temp->data;
	}
	temp->DeleteNode();
	return true;
}








