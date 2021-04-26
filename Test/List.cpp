#include"List.h"
#include<iostream>
using namespace std;


List::List()
{
	m_pList = new Node; //Í·½Úµã
	m_pList->data = 0;
	m_pList->next = NULL;
	m_iLength = 0;
}

List::~List()
{
	ClearList();
	delete m_pList;
	m_pList = NULL;
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
	while (currentNode != NULL)
	{
		Node* temp = currentNode->next;
		delete currentNode;
		currentNode = temp;
	}
	m_pList->next = NULL;

}







