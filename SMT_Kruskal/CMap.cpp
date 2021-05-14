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
	delete[]m_pEdge;
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
	m_pNodeArray[nodeIndex].m_bIsVisited = true;  //标识被选!

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
		int edgeIndex = getMinEdge(edgeVec);
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

int CMap::getMinEdge(vector<Edge>edgeVec)
{
	int minWeight = 0;
	int edgeIndex = 0;
	int i = 0;
	for (; i < edgeVec.size(); i++)   //遍历每条边
	{
		if (!edgeVec[i].m_bSelected)
		{
			minWeight = edgeVec[i].m_iWeightValue;   //说明该条边还未被选
			edgeIndex = i;     //记录相应索引
			break;
		}
	}

	if (minWeight == 0)
	{
		return -1;     // 说明没找到未被选的边（边都被选），获取失败
	}

	//判断其余边有没有权值更小的(这里的i是继上一次找到的i开始)
	for (; i < edgeVec.size(); i++)
	{
		if (edgeVec[i].m_bSelected)
		{
			continue;
		}
		else
		{
			//判断是否形成闭环，若形成则该最小权值的边要舍去
			/*if (m_pNodeArray[edgeVec[i].m_iNodeIndexB].m_bIsVisited)
			{
				continue;
			}*/

			if (minWeight > edgeVec[i].m_iWeightValue)
			{
				minWeight = edgeVec[i].m_iWeightValue;
				edgeIndex = i;
			}
		}
	}

	return edgeIndex;
}



void CMap::kruskalTree()
{
	int value = 0;
	int edgeCount = 0;


	// 定义存放结点集合的数组
	vector<vector<int>>nodeSets;

	//第一步：取出所有边
	vector<Edge>edgeVec;
	for (int i = 0; i < m_iCapacity; i++)
	{
		for (int k = i + 1; k < m_iCapacity; k++)  //取出邻接矩阵上半个三角
		{
			getValueFromMatrix(i, k, value); //找出权值
			if (value)
			{
				Edge edge(i, k, value);   //生成边对象存入集合
				edgeVec.push_back(edge);
			}
		}
	}

	//第二步：从所有边中取出组成最小生成树的边
	//1、找到算法结束条件
	while (edgeCount < m_iCapacity - 1)
	{
		//2、从边集合中找到最小边
		int minEdgeIndex=getMinEdge(edgeVec);
		edgeVec[minEdgeIndex].m_bSelected = true;

		//3、找出最小边连接的点
		int nodeAIndex = edgeVec[minEdgeIndex].m_iNodeIndexA;
		int nodeBIndex = edgeVec[minEdgeIndex].m_iNodeIndexB;

		bool nodeAIsInSet = false;
		bool nodeBIsInSet = false;

		int nodeAInSetLabel = -1;   //保存结点索引
		int nodeBInSetLabel = -1;

		//4、找出点所在的点集合
		for (int i = 0; i < nodeSets.size(); i++)
		{
			nodeAIsInSet=isInSet(nodeSets[i],nodeAIndex);  //判断当前结点所在哪个点集合中
			if (nodeAIsInSet)
			{
				nodeAInSetLabel = i;
			}
		}

		for (int i = 0; i < nodeSets.size(); i++)
		{
			nodeBIsInSet=isInSet(nodeSets[i], nodeBIndex);  //判断当前结点所在哪个点集合
			if (nodeBIsInSet)
			{
				nodeBInSetLabel = i;
			}
		}

		//5、根据点所在集合的不同做出不同处理
		if (nodeAInSetLabel == -1 && nodeBInSetLabel == -1)  //AB两点都不在已有的任何集合中
		{
			vector<int>vec;
			vec.push_back(nodeAIndex);
			vec.push_back(nodeBIndex);
			nodeSets.push_back(vec);
		}
		else if (nodeAInSetLabel == -1 && nodeBInSetLabel != -1) //A不在任何集合，B在
		{
			nodeSets[nodeBInSetLabel].push_back(nodeAIndex);//将A点放在B所在集合中
		}
		else if (nodeAInSetLabel != -1 && nodeBInSetLabel == -1) //B不在任何集合，A在
		{
			nodeSets[nodeAInSetLabel].push_back(nodeBIndex);//将B点放在A所在集合中
		}
		else if (nodeAInSetLabel != -1 && nodeBInSetLabel != -1 && nodeAInSetLabel != nodeBInSetLabel) // A B 分别在两不同的集合当中
		{
			//将集合合并的函数
			mergeNodeSet(nodeSets[nodeAInSetLabel], nodeSets[nodeBInSetLabel]);
			//合并到A的集合中，再删去B集合
			for (int k = nodeBInSetLabel; k < (int)nodeSets.size() - 1; k++)
			{
				nodeSets[k] = nodeSets[k + 1];
			}
		}

		else if (nodeAInSetLabel != -1 && nodeBInSetLabel != -1 && nodeAInSetLabel == nodeBInSetLabel)// A B在相同集合中，说明形成了闭环
		{
			continue;
		}
		m_pEdge[edgeCount] = edgeVec[minEdgeIndex];
		edgeCount++;

		// 打印连接的最小边的点的索引和权值
		cout << edgeVec[minEdgeIndex].m_iNodeIndexA << "---" << edgeVec[minEdgeIndex].m_iNodeIndexB << " ";
		cout << edgeVec[minEdgeIndex].m_iWeightValue << endl;
	}

}

bool CMap::isInSet(vector<int>nodeSet, int target) //判断顶点(target为索引)是否在某点集合中
{
	for (int i = 0; i < nodeSet.size(); i++)
	{
		if (nodeSet[i] == target)
		{
			return true;
		}
	}
	return false;
}

void CMap::mergeNodeSet(vector<int>& nodeSetA, vector<int>nodeSetB)//合并集合(前一个参数用引用表示最后还要取出合并的集合A)
{
	for (int i = 0; i < nodeSetB.size(); i++)
	{
		nodeSetA.push_back(nodeSetB[i]);
	}
}