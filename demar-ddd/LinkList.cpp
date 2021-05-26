#include"LinkList.h"
#include<iostream>
using namespace std;

List::List()
{
	m_pList = new Node;   //头结点
	m_pList->data = 0;
	m_pList->next = NULL;
	m_iLength = 0;
}

List::~List()
{
	ClearList();
	delete[]m_pList;
	m_pList = NULL;
}

// 清除链表
void List::ClearList()
{
	Node* currentNode = m_pList->next;
	while (currentNode)
	{
		Node* temp = currentNode->next;
		delete currentNode;
		currentNode = temp;
	}
	m_pList->next = NULL;

}
bool List:: ListEmpty()
{
	if (m_iLength == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool List:: GetElem(int i, Node* pNode)
{
	if (i < 0 || i >= m_iLength)
	{
		return false;
	}
	Node* currentNode = m_pList;
	Node* currentNodeBefore = NULL;
	for (int k = 0; k <= i; k++)
	{
		currentNodeBefore = currentNode;
		currentNode = currentNode->next;
	}
	pNode->data = currentNode->data;
	return true;
}



int List:: LocateElem(Node* pNode)
{
	Node* currentNode = m_pList;
	int count = 0;
	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
		if (currentNode->data == pNode->data)
		{
			return count;
		}
		count++;
	}
	return -1;
}

bool List:: PriorElem(Node* pCurrentNode, Node* pPreNode)
{
	Node* currentNode = m_pList;
	Node* currentNodeBefore = NULL;
	while(currentNode->next!=NULL)
	{
		currentNodeBefore = currentNode;
		currentNode = currentNode->next;
		if (currentNode->data == pCurrentNode->data)
		{
			if (currentNodeBefore == m_pList)
			{
				return false;
			}
			pPreNode->data = currentNodeBefore->data;
			return true;
		}
	}
	
	return false;

}
bool List:: NextElem(Node* pCurrentNode, Node* pNextNode)
{
	Node* currentNode = m_pList;
	Node* currentNodeNext = NULL;
	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
		if (currentNode->data == pCurrentNode->data)
		{
			if (currentNode->next == NULL)
			{
				return false;
			}
			pNextNode->data = currentNode->next->data;
			return true;
		}
	}

	return false;

}
void List:: ListTraverse()
{
	Node* currentNode = m_pList;
	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
		currentNode->printNode();
	}
}


bool List:: ListInsertHead(Node* pNode)
{
	Node* temp = m_pList->next;
	Node* newNode = new Node; 
	if (newNode == NULL)
	{
		return false;
	}
	newNode->data = pNode->data;
	m_pList->next = newNode;
	newNode->next = temp;
	m_iLength++;
	return true;
}

bool List:: ListInsertTail(Node* pNode)
{
	Node* currentNode = m_pList;
	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
	}
	Node* newNode = new Node;
	if (newNode == NULL)
	{
		return false;
	}
	newNode->data = pNode->data;
	currentNode->next = newNode;
	newNode->next = NULL;
	m_iLength++;
	return true;
}

bool List::ListInsert(int i, Node* pNode) //插入节点
{
	if (i < 0 || i > m_iLength)
	{
		return false;
	}
	Node* currentNode = m_pList;
	for (int k = 0; k < i; k++)
	{
		currentNode = currentNode->next;  //每次的currentNode是i位置的前一个元素
	}
	Node* newNode = new Node;
	if (newNode == NULL)
	{
		return false;
	}
	newNode->data = pNode->data;
	newNode->next = currentNode->next;
	currentNode->next = newNode;

}

bool List::ListDelete(int i, Node* pNode) //删除节点
{
	if (i < 0 || i >= m_iLength)
	{
		return false;
	}
	Node* currentNode = m_pList;
	Node* currentNodeBefore = NULL;  //要删除的节点的前驱
	for (int k = 0; k <= i; k++)
	{
		currentNodeBefore = currentNode; //当前节点赋值给前驱节点
		currentNode = currentNode->next; //后继节点为当前节点
	}
	currentNodeBefore->next = currentNode->next;
	pNode->data = currentNode->data;
	delete currentNode;
	currentNode = NULL;
	m_iLength--;
}










