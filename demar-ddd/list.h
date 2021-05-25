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
	bool GetElem(int i,Coordinate* e);  //��ȡ��ǰλ��i��Ԫ��
	int LocateElem(Coordinate* e);  // ��λԪ��e���ڵ�λ��
	bool GetPriorElem(Coordinate* currentElem, Coordinate* preElem);  //��ȡ��ǰԪ�ص�ǰ��
	bool GetNextElem(Coordinate* currentElem, Coordinate* nextElem);  //��ȡ��ǰԪ�صĺ��
	void ListTraversal();
	bool InsertElem(int i, Coordinate* e);
	bool DeleteElem(int i, Coordinate* e);

private:
	Coordinate* m_pList;   //���Ա�����
	int m_iSize;   //�������
	int m_iLength; //��ĵ�ǰ����Ԫ�صĴ�С
};





