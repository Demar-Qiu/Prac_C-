#pragma once
#include"Node.h"

class List
{
public:
	List();    //����size��������Ϊ����һ���ڵ�ʱ����ʱ��������ڴ�
	~List();
	void ClearList();
	int ListLength();
	bool ListEmpty();
	bool GetElem(int i, Node *pNode);
	int LocateElem(Node *pNode);
	bool PriorElem(Node *pCurrentNode, Node *pPreNode);
	bool NextElem(Node *pCurrentNode, Node *pNextNode);
	void ListTraverse();
	bool ListInsert(int i, Node *pNode); //����ڵ�
	bool ListDelete(int i, Node *pNode); //ɾ���ڵ�
	bool ListInsertHead(int i, Node *pNode);  //��ͷ����ڵ�
	bool ListInsertTail(int i, Node *pNode);  //��β����ڵ�

private:
	Node *m_pList;
	int m_iLength;
};