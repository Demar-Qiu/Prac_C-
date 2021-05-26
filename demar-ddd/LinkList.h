#pragma once
#include"Node.h"

class List
{
	List();   //����size����
	~List(); //
	void ClearList();
	bool ListEmpty();
	bool GetElem(int i, Node* pNode);
	int LocateElem(Node* pNode);
	bool PriorElem(Node* pCurrentNode, Node* pPreNode);
	bool NextElem(Node* pCurrentNode, Node*pNextNode);
	void ListTraverse();
	bool ListInsert(int i, Node* pNode); //����ڵ�
	bool ListDelete(int i, Node* pNode); //ɾ���ڵ�
	bool ListInsertHead(Node*pNode);
	bool ListInsertTail(Node*pNode);

private:
	Node* m_pList;
	int m_iLength;


};
