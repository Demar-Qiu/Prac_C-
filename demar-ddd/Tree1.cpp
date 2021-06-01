#include"Tree1.h"
#include<iostream>
using namespace std;



Tree1::Tree1()
{
	m_pRoot = new Node1();  //注意：根节点的父节点为空
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
	Node1* node = new Node1();  //pNode赋在新的节点中
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
	// 将要删除的节点放到pNode里面再删除
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
















