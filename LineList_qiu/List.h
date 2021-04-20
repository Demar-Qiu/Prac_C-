#pragma once


class List
{
public:
	List(int size);
	~List();
	void ClearList();
	bool ListEmpty();
	int ListLength();
	bool GetElem(int i, int* e);
	int LocateElem(int* e);
	bool PriorElem(int* currentElem, int* preElem); //获取前驱
	bool NextElem(int* currentElem, int* nextElem); //获取后继
	void ListTraverse();
	bool ListInsert(int i, int* e);
	bool ListDelete(int i, int* e);

private:
	int* m_pList;
	int m_iSize;   //线性表的大小 
	int m_iLength;  //线性表的指针
};