#include"list.h"
#include<iostream>
using namespace std;



List::List(int size)
{
	m_iSize = size;
	m_pList = new Coordinate[size];
	m_iLength = 0;

}

List::~List()
{
	delete []m_pList;
	m_pList = NULL;
}

bool List::ListEmpty()
{
	if (m_iLength == 0)
		return true;
	else
		return false;
}

int List::ListLength()
{
	return m_iLength;
}

bool List::GetElem(int i, Coordinate* e)
{
	if (i < 0 || i >= m_iLength)
		return false;
	else
	{
		*e = m_pList[i];
		return true;
	}
}

int List::LocateElem(Coordinate* e)
{
	for (int i = 0; i < m_iLength; i++)
	{
		if (m_pList[i] == *e)
			return i;
	}
	return -1;
}

bool List::GetPriorElem(Coordinate* currentElem, Coordinate* preElem)
{
	if (LocateElem(currentElem) == -1)
	{
		return false;
	}
	if (LocateElem(currentElem) == 0)
	{
		return false;
	}
	else
	{
		*preElem = m_pList[LocateElem(currentElem) - 1];
		return true;
	}
}

bool List::GetNextElem(Coordinate* currentElem, Coordinate* nextElem)
{
	if (LocateElem(currentElem) == -1)
	{
		return false;
	}
	if (LocateElem(currentElem) == m_iLength-1)
	{
		return false;
	}
	else
	{
		*nextElem = m_pList[LocateElem(currentElem) - 1];
		return true;
	}
}

void List::ListTraversal()
{
	for (int i = 0; i < m_iLength; i++)
	{
		cout << m_pList[i] << endl;
	}
}

bool List:: InsertElem(int i, Coordinate* e)
{
	if (i < 0 || i > m_iLength)
	{
		return false;
	}
	else
	{
		for (int k = m_iLength - 1; k >= i; k--)
		{
			m_pList[k + 1] = m_pList[k];
		}
		m_pList[i] = *e;
		m_iLength++;
		return true;
	}

}

bool List:: DeleteElem(int i, Coordinate* e)
{
	if (i < 0 || i >= m_iLength)
	{
		return false;
	}
	else 
	{
		*e = m_pList[i];
		for (int k = i + 1; k < m_iLength; k++)
		{
			m_pList[k - 1] = m_pList[k];
		}
		m_iLength--;
		return true;
	}
}







