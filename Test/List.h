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
	bool GetElem(int i, Node* pNode);  //获取第i个位置的节点放到pNode
	int LocateElem(Node* pNode);

	bool ListInsertHead(Node* pNode);  //从头插入节点(将一个节点插入头节点后边)
	bool ListInsertTail(Node* pNode);  //从尾部插入

	bool ListInsert(int i, Node* pNode);
	bool ListDelete(int i, Node* pNode);

	bool PriorElem(Node* pCurrentNode, Node* pPreNode);
	bool NextElem(Node* pCurrentNode, Node* pNextNode);

	void ListTraverse();
private:
	Node* m_pList;
	int m_iLength;
};