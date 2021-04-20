#include"List.h"
#include<iostream>
using namespace std;

List::List(int size) 
{
	m_iSize = size;
	m_pList = new int[m_iSize];
	m_iLength = 0;
}

List::~List()
{
	delete []m_pList;  
	m_pList = NULL;
}

void List::ClearList()
{
	m_iLength = 0;
}

bool List::ListEmpty()
{
	return m_iLength == 0 ? true : false;
}

int List::ListLength()
{
	return m_iLength;
}

bool List:: GetElem(int i, int* e)
{
	if (i < 0 || i >= m_iSize)
	{
		return false;
	}
	*e = m_pList[i];
	return true;
}

int List:: LocateElem(int* e)
{
	for (int i = 0; i < m_iLength; i++)
	{
		if (m_pList[i] == *e)
		{
			return i;
		}
	}
	return -1;

}

bool List:: PriorElem(int* currentElem, int* preElem)  //获取指定元素的前驱元素
{
	int temp = LocateElem(currentElem);
	if (temp == -1)
	{
		return false;
	}
	else
	{
		if (temp == 0)
		{
			return false;
		}
		else
		{
			*preElem = m_pList[temp - 1];            //找到前驱的元素
			return true;
		}
	}
}


bool List::NextElem(int* currentElem, int* nextElem)
{
	int temp = LocateElem(currentElem);
	if (temp == -1)
	{
		return false;
	}
	else
	{
		if (temp == m_iLength-1)  ///没有后继
		{
			return false;
		}
		else
		{
			*nextElem = m_pList[temp+1];            //找到前驱的元素
			return true;
		}
	}

}

void List::ListTraverse()  //遍历
{
	for (int i = 0; i < m_iLength; i++)
	{
		cout << m_pList[i] << endl;
	}
}


bool List::ListInsert(int i,int* e)  //在第i个位置插入元素e
{
	if (i < 0 || i > m_iLength)
	{
		return false;
	}
	for (int k = m_iLength - 1; k >= i; k--)  //先向后移动，先移动最后那个元素（若先移最开始的则后一个会被覆盖掉）
	{
		m_pList[k + 1] = m_pList[k];
	}

	m_pList[i] = *e;
	m_iLength++;
	return true;

}

bool List::ListDelete(int i, int* e)  //删除第i个位置的元素
{
	if (i < 0 || i >= m_iLength)
	{
		return false;
	}
	*e = m_pList[i];

	for (int k = i + 1; k < m_iLength; k++)  //把i+1位置元素移到i，后面也是一个个移到前一个
	{
		m_pList[k - 1] = m_pList[k];
	}

	
	m_iLength--;
	return true;
}















