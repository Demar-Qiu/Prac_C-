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

bool Tree::AddNode(int nodeIndex, int direction, Node* pNode) //��ӽ��Ĳ���
{
	Node* temp = SearchNode(nodeIndex); //���ҵ�Ҫ��ӵĽ�� 
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

bool Tree::DeleteNode(int nodeIndex, Node* pNode) //ɾ�����
{
	Node* temp = SearchNode(nodeIndex); //���ҵ�Ҫɾ���Ľ�� 
	if (temp == NULL)
	{
		return false;
	}
	if (pNode != NULL)     //ȡ��Ҫɾ���Ľ��
	{
		pNode->data = temp->data;
	}
	temp->DeleteNode();
	return true;
}








