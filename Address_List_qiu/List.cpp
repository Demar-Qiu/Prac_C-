#include"List.h"
#include<iostream>
using namespace std;

List::List()
{
	m_pList = new Node;  //ͷ�ڵ� ,Ҫ�ڶ��������ڴ棬���ջ�еĻ����˻��Զ�����
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
	while (currentNode != NULL)   //����ǰ�ڵ��Ƿ�Ϊnull
	{
		Node* temp = currentNode->next;  //��temp������һnext,Ȼ��ɾ��
		delete currentNode;
		currentNode = temp;
	}
	m_pList->next = NULL;
}

bool List::ListInsertHead(Node* pNode)  //��ͷ����ڵ�
{
	Node* temp = m_pList->next;  //��ͷ�ڵ��next����
	Node* newNode = new Node;  //�ڶ��������µ���ʱ�ڵ�
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

bool List::ListInsertTail(Node* pNode) //��β������ڵ�
{
	Node* currentNode = m_pList;
	while (currentNode->next != NULL)  //��ʱ��û�����һ���ڵ�
	{
		currentNode = currentNode->next;
	}
	// ��ʱ����β���ڵ�
	Node* newNode = new Node;  //�ڶ��������µ���ʱ�ڵ�
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


bool List::ListInsert(int i, Node* pNode)  //��λ��i����ڵ�
{
	if (i<0 || i>m_iLength)  //�ж�i�Ϸ���
	{
		return false;
	}
	Node* currentNode = m_pList;
	for (int k = 0; k < i; k++)   //��������i��λ��
	{
		currentNode = currentNode->next;
	}
	Node* newNode = new Node;  //�ڶ��������µ���ʱ�ڵ�
	if (newNode == NULL)
	{
		return false;
	}
	newNode->data = pNode->data;
	newNode->next = currentNode->next; //ԭ��currentNode����һ�ڵ�������newNode����һ��
	currentNode->next = newNode;

}

bool List::ListDelete(int i, Node* pNode)  //ɾ��λ��i�Ľڵ�
{
	if (i < 0 || i >= m_iLength)
	{
		return false;
	}
	Node* currentNode = m_pList;
	Node* currentNodeBefore = NULL;  //Ҫɾ���Ľڵ��ǰ��
	for (int k = 0; k <= i; k++)
	{
		currentNodeBefore = currentNode; //��ǰ�ڵ㸳ֵ��ǰ���ڵ�
		currentNode = currentNode->next; //��̽ڵ�Ϊ��ǰ�ڵ�
	}
	// ����ͼ�ͺ������
	currentNodeBefore->next = currentNode->next;
	pNode->data = currentNode->data;
	delete currentNode;
	currentNode = NULL;
	m_iLength--;
}

bool List::GetElem(int i, Node* pNode)   //��ȡ��i���ڵ�Ԫ��
{
	if (i < 0 || i >= m_iLength)
	{
		return false;
	}
	Node* currentNode = m_pList;
	Node* currentNodeBefore = NULL;
	for (int k = 0; k <= i; k++)  //ע��ͷ�ڵ㲻��i=0
	{
		currentNodeBefore = currentNode; //��ǰ�ڵ㸳ֵ��ǰ���ڵ�
		currentNode = currentNode->next; //��̽ڵ�Ϊ��ǰ�ڵ�
	}
	pNode->data = currentNode->data;
	return true;
}

int List::LocateElem(Node* pNode) //�ҵ�pNode�ڵ��λ��
{
	Node* currentNode = m_pList;
	int count = 0;
	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
		if (currentNode->data == pNode->data)
		{
			return count;   //ע��ֻ�Ƿ��ص�һ����ͬ�Ľڵ��λ��
		}
		count++;
	}
	return -1;    // ˵��һ����û�ҵ�



}


bool List::PriorElem(Node* pCurrentNode, Node* pPreNode)//�ҵ���ǰ�ڵ��ǰ���ڵ�
{
	Node* currentNode = m_pList;
	Node* tempNode = NULL;
	while (currentNode->next != NULL)
	{
		tempNode = currentNode;    //����ǰ���ڵ�
		currentNode = currentNode->next;
		if (currentNode->data == pCurrentNode->data)
		{
			if (tempNode == m_pList)
			{
				return false;   //����ǰ�ڵ��ǰ����ͷ�ڵ����Ҳ���
			}
			pPreNode->data = tempNode->data;   //��ֵǰ���ڵ�������
			return true;
		}
	}
	return false;
}

bool List::NextElem(Node* pCurrentNode, Node* pNextNode)//�ҵ�ǰ�ڵ�ĺ�̽ڵ�
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
				return false;   //����ǰ�ڵ������һ���ڵ�
			}
			pNextNode->data = currentNode->next->data;   //��ֵ��ǰ�ڵ�ĺ�̽ڵ��������
			return true;
		}
	}
	return false;
}


void List::ListTraverse()  //����
{
	Node* currentNode = m_pList;
	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
		currentNode->printNode();
	}
}












