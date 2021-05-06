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
	Node *temp = SearchNode(nodeIndex);  //�ж�Ҫ����Ľ���Ƿ�Ϸ�
	if (temp == NULL)
	{
		return false;
	}
	Node *node = new Node();    //��Ҫ��ӵĽ�����һ���½��
	if (node == NULL)
	{
		return false;
	}
	node->index = pNode->index;
	node->data =pNode->data;
	node->pParent = temp;

	if (direction == 0)  //�ý�����Ϊ��
	{
		temp->pLChild = node;
	}

	if (direction == 1)  ////�ý�����Ϊ��
	{
		temp->pRChild = node;
	}

}


bool Tree::DeleteNode(int nodeIndex, Node *pNode)
{
	Node *temp = SearchNode(nodeIndex);  //�ж�Ҫɾ���Ľ���Ƿ�Ϊ��
	if (temp == NULL)
	{
		return false;
	}

	if (pNode != NULL)  //Ϊ����ֱ��ɾ�������ô浽pNode��
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