#include"CMap.h"
#include<iostream>
#include<vector>
using namespace std;



CMap::CMap(int capacity)
{
	m_iCapacity = capacity;
	m_iNodeCount = 0;
	m_pNodeArray = new Node[m_iCapacity];
	m_pMatrix = new int[m_iCapacity * m_iCapacity];
	memset(m_pMatrix, 0, m_iCapacity * m_iCapacity * sizeof(int)); //��������ڴ浥Ԫ��ʼ��Ϊ0
}

CMap::~CMap()
{
	delete[]m_pNodeArray;
	delete[]m_pMatrix;
}

bool CMap::addNode(Node* pNode)  //��ӽ��
{
	m_pNodeArray[m_iNodeCount].m_cData = pNode->m_cData;
	m_iNodeCount++;
	return true;
}

void CMap::resetNode()  //����
{
	for (int i = 0; i < m_iNodeCount; i++)
	{
		m_pNodeArray[i].m_bIsVisited = false;
	}
}

bool CMap::setValueToMatrixForDirectedGraph(int row, int col, int val) //д���ڽӾ����ֵ������ͼ��
{
	if (row < 0 || row >= m_iCapacity)
	{
		return false;
	}
	if (col < 0 || col >= m_iCapacity)
	{
		return false;
	}
	m_pMatrix[row * m_iCapacity + col] = val;
	return true;
}

bool CMap::setValueToMatrixForUndirectedGraph(int row, int col, int val)  //д���ڽӾ����ֵ������ͼ��
{
	if (row < 0 || row >= m_iCapacity)
	{
		return false;
	}
	if (col < 0 || col >= m_iCapacity)
	{
		return false;
	}
	m_pMatrix[row * m_iCapacity + col] = val;
	m_pMatrix[col * m_iCapacity + row] = val;
	return true;
}

bool CMap::getValueFromMatrix(int row, int col, int& val)  // ��ȡ�ڽӾ����ֵ
{
	if (row < 0 || row >= m_iCapacity)
	{
		return false;
	}
	if (col < 0 || col >= m_iCapacity)
	{
		return false;
	}
	val = m_pMatrix[row * m_iCapacity + col];
	return true;
}

void CMap::printMatrix()  //��ӡ�ڽӾ���
{
	for (int i = 0; i < m_iCapacity; i++)
	{
		for (int k = 0; k < m_iCapacity; k++)
		{
			cout << m_pMatrix[i * m_iCapacity + k] << " ";
		}
		cout << endl;
	}
}


 
void CMap::depthFirstTraverse(int nodeIndex)  //������ȱ���
{
	int value = 0;
	cout << m_pNodeArray[nodeIndex].m_cData << " ";
	m_pNodeArray[nodeIndex].m_bIsVisited = true;
	for (int i = 0; i < m_iCapacity; i++)  //�����뵱ǰ�������ӵĵ�
	{
		getValueFromMatrix(nodeIndex,i,value);    //ȡ����
		if (value)   //��ʾ�����ڣ����ҵõ������ӵ���������
		{
			if (m_pNodeArray[i].m_bIsVisited)  //������ʹ�
			{
				continue;
			}
			else
			{
				depthFirstTraverse(i);
			}

		}
		else
		{
			continue;
		}
	}

}


void CMap::breadthFirstTraverse(int nodeIndex)   //������ȱ���
{
	cout << m_pNodeArray[nodeIndex].m_cData << " ";
	m_pNodeArray[nodeIndex].m_bIsVisited = true;


	vector<int>curVec;
	curVec.push_back(nodeIndex);

	breadthFirstTraverseImpl(curVec);
}


void CMap::breadthFirstTraverseImpl(vector<int>preVec)
{
	int value = 0;
	vector<int>curVec;   //�ø����鱣�浱ǰ��һ������н��

	for (int j = 0; j < (int)preVec.size(); j++)  //��һ���м������
	{
		for (int i = 0; i < m_iCapacity; i++)        //�ж���һ��ĸõ����������Ƿ�������
		{
			getValueFromMatrix(preVec[j], i, value);  //��ȡֵ
			if (value)
			{
				if (m_pNodeArray[i].m_bIsVisited)  //��ǰ�����ӵĵ��Ƿ��ѱ�����
				{
					continue;
				}
				else
				{
					cout << m_pNodeArray[i].m_cData << " ";
					m_pNodeArray[i].m_bIsVisited = true;

					curVec.push_back(i);  //���������ӵ���һ��ĵ�
				}
			}
		}
	}
	if (curVec.size() == 0)   //���㲻���ڱ����ʵĵ�,��һ��͸�û��
	{
		return;
	}
	else
	{
		breadthFirstTraverseImpl(curVec);
	}
}






