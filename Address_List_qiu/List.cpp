#include"List.h"
#include<iostream>
using namespace std;

List::List()
{
	m_pList = new Node;  //头节点 ,要在堆中申请内存，如果栈中的话完了会自动回收
	//m_pList->data = 0;
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
	Node* currentNode = m_pList->next;
	while (currentNode != NULL)   //看当前节点是否为null
	{
		Node* temp = currentNode->next;  //用temp保存下一next,然后删除
		delete currentNode;
		currentNode = temp;
	}
	m_pList->next = NULL;
}

bool List::ListInsertHead(Node* pNode)  //从头插入节点
{
	Node* temp = m_pList->next;  //将头节点的next保存
	Node* newNode = new Node;  //在堆中申请新的临时节点
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

bool List::ListInsertTail(Node* pNode) //从尾部插入节点
{
	Node* currentNode = m_pList;
	while (currentNode->next != NULL)  //此时还没到最后一个节点
	{
		currentNode = currentNode->next;
	}
	// 此时到了尾部节点
	Node* newNode = new Node;  //在堆中申请新的临时节点
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


bool List::ListInsert(int i, Node* pNode)  //在位置i插入节点
{
	if (i<0 || i>m_iLength)  //判断i合法性
	{
		return false;
	}
	Node* currentNode = m_pList;
	for (int k = 0; k < i; k++)   //遍历到第i个位置
	{
		currentNode = currentNode->next;
	}
	Node* newNode = new Node;  //在堆中申请新的临时节点
	if (newNode == NULL)
	{
		return false;
	}
	newNode->data = pNode->data;
	newNode->next = currentNode->next; //原来currentNode的下一节点现在是newNode的下一个
	currentNode->next = newNode;

}

bool List::ListDelete(int i, Node* pNode)  //删除位置i的节点
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
	// 画个图就好理解了
	currentNodeBefore->next = currentNode->next;
	pNode->data = currentNode->data;
	delete currentNode;
	currentNode = NULL;
	m_iLength--;
}

bool List::GetElem(int i, Node* pNode)   //获取第i个节点元素
{
	if (i < 0 || i >= m_iLength)
	{
		return false;
	}
	Node* currentNode = m_pList;
	Node* currentNodeBefore = NULL;
	for (int k = 0; k <= i; k++)  //注意头节点不是i=0
	{
		currentNodeBefore = currentNode; //当前节点赋值给前驱节点
		currentNode = currentNode->next; //后继节点为当前节点
	}
	pNode->data = currentNode->data;
	return true;
}

int List::LocateElem(Node* pNode) //找到pNode节点的位序
{
	Node* currentNode = m_pList;
	int count = 0;
	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
		if (currentNode->data == pNode->data)
		{
			return count;   //注意只是返回第一个相同的节点的位序
		}
		count++;
	}
	return -1;    // 说明一个都没找到



}


bool List::PriorElem(Node* pCurrentNode, Node* pPreNode)//找到当前节点的前驱节点
{
	Node* currentNode = m_pList;
	Node* tempNode = NULL;
	while (currentNode->next != NULL)
	{
		tempNode = currentNode;    //保存前驱节点
		currentNode = currentNode->next;
		if (currentNode->data == pCurrentNode->data)
		{
			if (tempNode == m_pList)
			{
				return false;   //若当前节点的前驱是头节点则找不到
			}
			pPreNode->data = tempNode->data;   //赋值前驱节点数据域
			return true;
		}
	}
	return false;
}

bool List::NextElem(Node* pCurrentNode, Node* pNextNode)//找当前节点的后继节点
{
	Node* currentNode = m_pList;
	Node* tempNode = NULL;
	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
		if (currentNode->data == pCurrentNode->data)
		{
			if (pCurrentNode->next == NULL)
			{
				return false;   //若当前节点是最后一个节点
			}
			pNextNode->data = currentNode->next->data;   //赋值当前节点的后继节点的数据域
			return true;
		}
	}
	return false;
}


void List::ListTraverse()  //遍历
{
	Node* currentNode = m_pList;
	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
		currentNode->printNode();
	}
}












