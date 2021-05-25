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
	bool GetElem(int i,Coordinate* e);  //获取当前位置i的元素
	int LocateElem(Coordinate* e);  // 定位元素e所在的位置
	bool GetPriorElem(Coordinate* currentElem, Coordinate* preElem);  //获取当前元素的前驱
	bool GetNextElem(Coordinate* currentElem, Coordinate* nextElem);  //获取当前元素的后继
	void ListTraversal();
	bool InsertElem(int i, Coordinate* e);
	bool DeleteElem(int i, Coordinate* e);

private:
	Coordinate* m_pList;   //线性表数组
	int m_iSize;   //表的容量
	int m_iLength; //表的当前所放元素的大小
};





