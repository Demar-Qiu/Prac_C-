#include"Tree1.h"
#include<iostream>
using namespace std;



Tree1::Tree1()
{
	m_pRoot = new Node1();  //ע�⣺���ڵ�ĸ��ڵ�Ϊ��
}

Node1* Tree1::SearchNode(int nodeIndex)
{
	return m_pRoot->SearchNode(nodeIndex);
}

bool Tree1::AddNode(int nodeIndex, int direction, Node1* pNode)
{
	Node1* temp = SearchNode(nodeIndex);
	if (temp == NULL)
	{
		return false;
	}
	Node1* node = new Node1();  //pNode�����µĽڵ���
	if (node == NULL)
	{
		return false;
	}

	node->index = pNode->index;
	node->data = pNode->data;
	node->pParent = temp;

	if (direction == 0)
	{
		if (temp->pLChild != NULL)
		{
			return false;
		}
		temp->pLChild = node;
	}
	if (direction == 1)
	{
		if (temp->pRChild != NULL)
		{
			return false;
		}
		temp->pRChild = node;
	}

}


bool Tree1::DeleteNode(int nodeIndex, Node1* pNode)
{
	// ��Ҫɾ���Ľڵ�ŵ�pNode������ɾ��
	Node1* temp = SearchNode(nodeIndex);
	if (temp == NULL)
	{
		return false;
	}
	if (pNode != NULL)
	{
		pNode->data = temp->data;
	}
	temp->DeleteNode();
	return true;
}


void Tree1::PreorderTraversal()
{
	m_pRoot->PreorderTraversal();
}

void Tree1::InorderTraversal()
{
	m_pRoot->InorderTraversal();
}

void Tree1::PostorderTraversal()
{
	m_pRoot->PostorderTraversal();
}

void Tree1::LevelorderTraversal()
{
	m_pRoot->LevelorderTraversal();
}
















