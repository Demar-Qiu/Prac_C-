#pragma once
#include<iostream>
#include"Node2.h"
#include<vector>
using namespace std;

class CMap
{
public:
	CMap(int capacity);
	~CMap();
	bool addNode(Node2* pNode);  //向图中加入顶点
	void resetNode();  //重置顶点（将顶点重置为没访问过）
	bool setValueToMatrixForDirectedGraph(int row, int col, int val = 1); //为有向图设置邻接矩阵,val默认权值1
	bool setValueToMatrixForUndirectedGraph(int row, int col, int val = 1);//为无向图设置邻接矩阵
	void printMatrix();  //打印邻接矩阵


private:
	bool getValueFromMatrix(int row, int col, int& val);//从矩阵中获取权值(弧)

private:
	int m_iCapacity;  //图中最多可容纳的顶点数
	int m_iNodeCount;  //当前已经添加了的顶点个数
	Node2* m_pNodeArray;  //用来存放顶点的数组
	int* m_pMatrix;  //用来存放邻阶矩阵的数组

};





