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
	memset(m_pMatrix, 0, m_iCapacity * m_iCapacity * sizeof(int)); //将矩阵的内存单元初始化为0

	m_pEdge = new Edge[m_iCapacity - 1]; //边数=点数-1

}

CMap::~CMap()
{
	delete[]m_pNodeArray;
	delete[]m_pMatrix;
}

bool CMap::addNode(Node* pNode)  //添加结点
{
	m_pNodeArray[m_iNodeCount].m_cData = pNode->m_cData;
	m_iNodeCount++;
	return true;
}

void CMap::resetNode()  //重置
{
	for (int i = 0; i < m_iNodeCount; i++)
	{
		m_pNodeArray[i].m_bIsVisited = false;
	}
}

bool CMap::setValueToMatrixForDirectedGraph(int row, int col, int val) //写入邻接矩阵的值（有向图）
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

bool CMap::setValueToMatrixForUndirectedGraph(int row, int col, int val)  //写入邻接矩阵的值（无向图）
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

bool CMap::getValueFromMatrix(int row, int col, int& val)  // 读取邻接矩阵的值
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

void CMap::printMatrix()  //打印邻接矩阵
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


void CMap::depthFirstTraverse(int nodeIndex)  //深度优先遍历
{
	int value = 0;
	cout << m_pNodeArray[nodeIndex].m_cData << " ";
	m_pNodeArray[nodeIndex].m_bIsVisited = true;
	for (int i = 0; i < m_iCapacity; i++)  //查找与当前点相连接的点
	{
		getValueFromMatrix(nodeIndex, i, value);    //取出弧
		if (value)   //表示弧存在，即找得到有连接的其他顶点
		{
			if (m_pNodeArray[i].m_bIsVisited)  //如果访问过
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


void CMap::breadthFirstTraverse(int nodeIndex)   //广度优先遍历
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
	vector<int>curVec;   //用该数组保存当前这一层的所有结点

	for (int j = 0; j < (int)preVec.size(); j++)  //上一层有几个结点
	{
		for (int i = 0; i < m_iCapacity; i++)        //判断上一层的该点与其他点是否有连接
		{
			getValueFromMatrix(preVec[j], i, value);  //获取值
			if (value)
			{
				if (m_pNodeArray[i].m_bIsVisited)  //当前所连接的点是否已被访问
				{
					continue;
				}
				else
				{
					cout << m_pNodeArray[i].m_cData << " ";
					m_pNodeArray[i].m_bIsVisited = true;

					curVec.push_back(i);  //保存所连接的下一层的点
				}
			}
		}
	}
	if (curVec.size() == 0)   //本层不存在被访问的点,下一层就更没有
	{
		return;
	}
	else
	{
		breadthFirstTraverseImpl(curVec);
	}
}


void CMap::primTree(int nodeIndex)   //普里姆生成树
{
	int value = 0;  //边的权值
	int edgeCount = 0;  //边数计数（达到m_iCapacity-1即停）
	vector<int>nodeVec;  //存储点的集合
	vector<Edge>edgeVec;  //存储边的集合

	cout << m_pNodeArray[nodeIndex].m_cData << endl;   //打印开始的点

	nodeVec.push_back(nodeIndex);  //将传入的nodeIndex放入nodeVec[0]中

	// 找到所有最小生成树的边为止
	while (edgeCount < m_iCapacity - 1)
	{
		int temp = nodeVec.back();  // 因为每次开始的nodeIndex会不一样,取出它

		for (int i = 0; i < m_iCapacity; i++)    // 从当前点开始轮询其他点看是否有连接
		{
			getValueFromMatrix(temp, i, value);      
			if (value)   //则有边
			{
				if (m_pNodeArray[i].m_bIsVisited)
				{
					continue;
				}
				else
				{
					Edge edge(temp, i, value);   //将这条边对象生成
					edgeVec.push_back(edge);   //存入备选边集合
				}
			}
		}

		// 从可选边集合中找出权值最小的边
		int edgeIndex=getMinEdge(edgeVec);
		edgeVec[edgeIndex].m_bSelected = true;

		//打印出找到的最小边的连接的两个点和相应边权值
		cout << edgeVec[edgeIndex].m_iNodeIndexA << "---" << edgeVec[edgeIndex].m_iNodeIndexB << " ";
		cout << edgeVec[edgeIndex].m_iWeightValue << endl;

		m_pEdge[edgeCount] = edgeVec[edgeIndex];   //找到后存入所选的边集合
		edgeCount++;

		int nextNodeIndex = edgeVec[edgeIndex].m_iNodeIndexB;  //找到最小边的所连接到的下一个点
		nodeVec.push_back(nextNodeIndex);  //将该点放入点集合
		m_pNodeArray[nextNodeIndex].m_bIsVisited = true;

		//打印出找到的连接的下一个点
		cout << m_pNodeArray[nextNodeIndex].m_cData << endl;
	}
}



