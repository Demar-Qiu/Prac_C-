#pragma once
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
	bool GetElem(int i, Node* pNode);
	int LocateElem(Node* pNode);
	bool PriorElem(Node* pCurrentNode, Node* pPreNode);
	bool NextElem(Node* pCurrentNode, Node* pNextNode);
	void ListTraverse();
	bool ListInsert(int i, Node* pNode); //����ڵ�
	bool ListDelete(int i, Node* pNode); //ɾ���ڵ�
	bool ListInsertHead(Node* pNode);  //��ͷ����ڵ�(��һ���ڵ����ͷ�ڵ���)
	bool ListInsertTail(Node* pNode);  //��β����ڵ㣨����β����ߣ�

private:
	Node* m_pList;
	int m_iLength;
};