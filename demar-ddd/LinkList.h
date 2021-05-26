#pragma once
#include"Node.h"

class List
{
	List();   //无需size参数
	~List(); //
	void ClearList();
	bool ListEmpty();
	bool GetElem(int i, Node* pNode);
	int LocateElem(Node* pNode);
	bool PriorElem(Node* pCurrentNode, Node* pPreNode);
	bool NextElem(Node* pCurrentNode, Node*pNextNode);
	void ListTraverse();
	bool ListInsert(int i, Node* pNode); //插入节点
	bool ListDelete(int i, Node* pNode); //删除节点
	bool ListInsertHead(Node*pNode);
	bool ListInsertTail(Node*pNode);

private:
	Node* m_pList;
	int m_iLength;


};
