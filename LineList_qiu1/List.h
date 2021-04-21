#pragma once
#include"Coordinate.h"


class List
{
public:
	List(int size);
	~List();
	void ClearList();
	bool ListEmpty();
	int ListLength();
	bool GetElem(int i, Coordinate* e);
	int LocateElem(Coordinate* e);
	bool PriorElem(Coordinate* currentElem, Coordinate* preElem); //��ȡǰ��
	bool NextElem(Coordinate* currentElem, Coordinate* nextElem); //��ȡ���
	void ListTraverse();
	bool ListInsert(int i, Coordinate *e);
	bool ListDelete(int i, Coordinate *e);

private:
	Coordinate* m_pList;
	int m_iSize;   //���Ա�Ĵ�С 
	int m_iLength;  //���Ա��ָ��
};