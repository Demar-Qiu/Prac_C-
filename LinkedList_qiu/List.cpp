#include"List.h"
#include<iostream>
using namespace std;

List::List()
{
	m_pList = new Node;  //ͷ�ڵ� ,Ҫ�ڶ��������ڴ棬���ջ�еĻ����˻��Զ�����
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
	while (currentNode != NULL)   //����ǰ�ڵ��Ƿ�Ϊnull
	{
		Node *temp=currentNode->next;  //��temp������һnext,Ȼ��ɾ��
		delete currentNode;
		currentNode = temp;  
	}
	m_pList->next = NULL;
}

bool List::ListInsertHead(Node *pNode)  //��ͷ����ڵ�
{
	Node *temp=m_pList->next;  //��ͷ�ڵ��next����
	Node *newNode = new Node;  //�ڶ��������µĽڵ�
	if (newNode == NULL)
	{
		return false;
	}
	
	newNode->data = pNode->data;  //�������pNode�������򱣴浽�µĽڵ�newNode��
	m_pList->next = newNode;
	newNode->next = temp;  //�½ڵ�ָ��֮ǰͷ�ڵ�ָ��ģ��ѱ�����temp�У�
	m_iLength++;
	return true;
}

bool List::ListInsertTail(Node *pNode)
{
	Node *currentNode = m_pList;
	while (currentNode->next != NULL)  //��ʱ��û�����һ���ڵ�
	{
		currentNode = currentNode->next;
	}
	// ��ʱ����β���ڵ�
	Node *newNode = new Node;  //�ڶ��������µĽڵ�
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


bool List::ListInsert(int i, Node *pNode)  //��λ��i����ڵ�
{
	if (i<0 || i>m_iLength)  //�ж�i�Ϸ���
	{
		return false;
	}
	Node *currentNode = m_pList;
	for (int k = 0; k < i; k++)
	{
		currentNode = currentNode->next;
	}
	Node *newNode = new Node;  //�ڶ��������µĽڵ�
	if (newNode == NULL)
	{
		return false;
	}
	newNode->data = pNode->data;
	newNode->next = currentNode->next; //ԭ��currentNode����һ�ڵ�������newNode����һ��
	currentNode->next = newNode;  

}

bool List::ListDelete(int i, Node *pNode)  //ɾ��λ��i�Ľڵ�
{
	if (i < 0 || i >= m_iLength)
	{
		return false;
	}
	Node *currentNode = m_pList;
	Node*currentNodeBefore = NULL;  
	for (int k = 0; k <= i; k++)
	{
		currentNodeBefore = currentNode; //��ǰ��㸳ֵ��ǰһ���ڵ�
		currentNode = currentNode->next;
	}

	currentNodeBefore->next = currentNode->next;
	pNode->data = currentNode->data;
	delete currentNode;
	currentNode == NULL;
	m_iLength--;
}

