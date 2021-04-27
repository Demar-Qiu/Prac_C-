#pragma once
#include"Node.h"


class List
{
public:
	List();  
	~List();
	void ClearList();
	int ListLength();
	bool ListEmpty();
	bool GetElem(int i, Node* pNode);  //��ȡ��i��λ�õĽڵ�ŵ�pNode
	int LocateElem(Node* pNode);

	bool ListInsertHead(Node* pNode);  //��ͷ����ڵ�(��һ���ڵ����ͷ�ڵ���)
	bool ListInsertTail(Node* pNode);  //��β������

	bool ListInsert(int i, Node* pNode);
	bool ListDelete(int i, Node* pNode);

	bool PriorElem(Node* pCurrentNode, Node* pPreNode);
	bool NextElem(Node* pCurrentNode, Node* pNextNode);

	void ListTraverse();
private:
	Node* m_pList;
	int m_iLength;
};