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

Tree::~Tree()
{
	DeleteNode(0, NULL);
	//m_pRoot->DeleteNode();
}


bool Tree::AddNode(int nodeIndex, int direction, Node *pNode)
{
	Node *temp = SearchNode(nodeIndex);  //判断要加入的结点是否合法
	if (temp == NULL)
	{
		return false;
	}
	Node *node = new Node();    //将要添加的结点存入一个新结点
	if (node == NULL)
	{
		return false;
	}
	node->index = pNode->index;
	node->data =pNode->data;
	node->pParent = temp;

	if (direction == 0)  //该结点添加为左
	{
		temp->pLChild = node;
	}

	if (direction == 1)  ////该结点添加为右
	{
		temp->pRChild = node;
	}

}


bool Tree::DeleteNode(int nodeIndex, Node *pNode)
{
	Node *temp = SearchNode(nodeIndex);  //判断要删除的结点是否为空
	if (temp == NULL)
	{
		return false;
	}

	if (pNode != NULL)  //为空则直接删除，不用存到pNode中
	{
		pNode->data = temp->data;
	}

	temp->DeleteNode();
	return true;
}

void Tree::PreorderTraversal()
{
	m_pRoot->PreorderTraversal();
}

void Tree::InorderTraversal()
{
	m_pRoot->InorderTraversal();
}

void Tree::PostorderTraversal()
{
	m_pRoot->PostorderTraversal();
}