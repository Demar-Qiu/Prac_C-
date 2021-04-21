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
	bool PriorElem(Coordinate* currentElem, Coordinate* preElem); //获取前驱
	bool NextElem(Coordinate* currentElem, Coordinate* nextElem); //获取后继
	void ListTraverse();
	bool ListInsert(int i, Coordinate *e);
	bool ListDelete(int i, Coordinate *e);

private:
	Coordinate* m_pList;
	int m_iSize;   //线性表的大小 
	int m_iLength;  //线性表的指针
};