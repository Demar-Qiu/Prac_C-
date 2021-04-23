#include"List.h"
#include<iostream>
using namespace std;

List::List()
{
	m_pList = new Node;  //头节点 ,要在堆中申请内存，如果栈中的话完了会自动回收
	m_pList->data = 0;
	m_pList->next = NULL;
	m_iLength = 0;
}

List::~List()
{
	ClearList();
	delete m_pList;
	m_pList == NULL;
}

bool List::ListEmpty()
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

int List::ListLength() 
{
	return m_iLength;
}

void List::ClearList()
{
	Node*currentNode = m_pList->next;
	while (currentNode != NULL)   //看当前节点是否为null
	{
		Node *temp=currentNode->next;  //用temp保存下一next,然后删除
		delete currentNode;
		currentNode = temp;  
	}
	m_pList->next = NULL;
}

bool List::ListInsertHead(Node *pNode)  //从头插入节点
{
	Node *temp=m_pList->next;  //将头节点的next保存
	Node *newNode = new Node;  //在堆中申请新的节点
	if (newNode == NULL)
	{
		return false;
	}
	
	newNode->data = pNode->data;  //将传入的pNode的数据域保存到新的节点newNode中
	m_pList->next = newNode;
	newNode->next = temp;  //新节点指向之前头节点指向的（已保存在temp中）
	m_iLength++;
	return true;
}

bool List::ListInsertTail(Node *pNode)
{
	Node *currentNode = m_pList;
	while (currentNode->next != NULL)  //此时还没到最后一个节点
	{
		currentNode = currentNode->next;
	}
	// 此时到了尾部节点
	Node *newNode = new Node;  //在堆中申请新的节点
	if (newNode == NULL)
	{
		return false;
	}
	newNode->data = pNode->data;  
	newNode->next = NULL;         
	currentNode->next = newNode;  
	m_iLength++;
	return true;

}


bool List::ListInsert(int i, Node *pNode)  //在位置i插入节点
{
	if (i<0 || i>m_iLength)  //判断i合法性
	{
		return false;
	}
	Node *currentNode = m_pList;
	for (int k = 0; k < i; k++)
	{
		currentNode = currentNode->next;
	}
	Node *newNode = new Node;  //在堆中申请新的节点
	if (newNode == NULL)
	{
		return false;
	}
	newNode->data = pNode->data;
	newNode->next = currentNode->next; //原来currentNode的下一节点现在是newNode的下一个
	currentNode->next = newNode;  

}

bool List::ListDelete(int i, Node *pNode)  //删除位置i的节点
{
	if (i < 0 || i >= m_iLength)
	{
		return false;
	}
	Node *currentNode = m_pList;
	Node*currentNodeBefore = NULL;  
	for (int k = 0; k <= i; k++)
	{
		currentNodeBefore = currentNode; //当前结点赋值给前一个节点
		currentNode = currentNode->next;
	}

	currentNodeBefore->next = currentNode->next;
	pNode->data = currentNode->data;
	delete currentNode;
	currentNode == NULL;
	m_iLength--;
}

