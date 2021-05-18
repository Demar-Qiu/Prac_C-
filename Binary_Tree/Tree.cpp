#include<iostream>
#include"Tree.h"
using namespace std;



Tree::Tree(int size, int *pRoot)
{
	m_iSize = size;
	m_pTree = new int[size];
	for (int i = 0; i < size; i++)
	{
		m_pTree[i] = 0;
	}
	m_pTree[0] = *pRoot;
}

Tree::~Tree()
{
	delete[]m_pTree;
	m_pTree = NULL;
}


int* Tree::SearchNode(int nodeIndex)
{
	if (nodeIndex < 0 || nodeIndex >= m_iSize)
	{
		return NULL;
	}
	if (m_pTree[nodeIndex] == 0)  //��0��ʾ��ǰ�����ڽ��
	{
		return NULL;
	}
	return &m_pTree[nodeIndex];
}


bool Tree::AddNode(int nodeIndex, int direction, int* pNode)
{
	if (nodeIndex < 0 || nodeIndex >= m_iSize)
	{
		return false;
	}
	if (m_pTree[nodeIndex] == 0)  //��0��ʾ��ǰ�����ڽ��
	{
		return false;
	}

	if (direction == 0)    // ��ʾ����߲���
	{
		if (nodeIndex * 2 + 1 >= m_iSize)
		{
			return false;
		}
		if (m_pTree[nodeIndex * 2 + 1] != 0)  //��Ϊ0��ʾ��ʱ�н�����Բ��ܲ���
		{
			return false;
		}
		m_pTree[nodeIndex * 2 + 1] = *pNode;  //������ڵ�
	}
	if (direction == 1)    // ��ʾ���ұ߲���
	{
		if (nodeIndex * 2 + 2 >= m_iSize)
		{
			return false;
		}
		if (m_pTree[nodeIndex * 2 + 2] != 0)  //��Ϊ0��ʾ��ʱ�н�����Բ��ܲ���
		{
			return false;
		}
		m_pTree[nodeIndex * 2 + 2] = *pNode;  //�����ҽڵ�
	}
	return true;
}


bool Tree::DeleteNode(int nodeIndex, int* pNode)
{

	if (nodeIndex < 0 || nodeIndex >= m_iSize)
	{
		return false;
	}
	if (m_pTree[nodeIndex] == 0)  //��0��ʾ��ǰ�����ڽ��
	{
		return false;
	}
	*pNode = m_pTree[nodeIndex];  //����ɾ������е�ֵȡ���˷���pNode
	m_pTree[nodeIndex] = 0;      //��ʾ��㱻ɾ��
	return true;
}


void Tree::TreeTraverse()
{
	for (int i = 0; i < m_iSize; i++)
	{
		cout << m_pTree[i] << ",";
	}
}