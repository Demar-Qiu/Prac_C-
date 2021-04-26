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
	bool GetElem(int i, Node* pNode);




private:
	Node* m_pList;
	int m_iLength;
};