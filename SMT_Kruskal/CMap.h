#pragma once
#include<iostream>
using namespace std;
#include"Node.h"
#include"Edge.h"
#include<vector>


class CMap
{
public:
	CMap(int capacity);
	~CMap();
	bool addNode(Node* pNode);//��ͼ�м��붥�㣨��㣩
	void resetNode();  //���ö��㣨����������Ϊû�з��ʹ���
	bool setValueToMatrixForDirectedGraph(int row, int col, int val = 1); //Ϊ����ͼ�����ڽӾ���,valĬ��Ȩֵ1
	bool setValueToMatrixForUndirectedGraph(int row, int col, int val = 1);//Ϊ����ͼ�����ڽӾ���
	void printMatrix();  //��ӡ�ڽӾ���

	void depthFirstTraverse(int nodeIndex);  //������ȱ���,nodeIndex��ʾ���ĸ��㣨������ʾ����ʼ����
	void breadthFirstTraverse(int nodeIndex); //������ȱ���

	void primTree(int nodeIndex);   //����ķ������
	void kruskalTree();    //��³˹�����㷨������

private:
	bool getValueFromMatrix(int row, int col, int& val);//�Ӿ����л�ȡȨֵ(��)
	void breadthFirstTraverseImpl(vector<int>preVec);  //������ȱ���ʵ�ֺ���

	int getMinEdge(vector<Edge>edgeVec);  //�ӱ߼����л�ȡȨֵ��С�ıߣ�������Ӧ����
	bool isInSet(vector<int>nodeSet, int target); //�ж϶����Ƿ���ĳ�㼯����
	void mergeNodeSet(vector<int>& nodeSetA, vector<int>nodeSetB);//�ϲ��������㼯��
private:
	int m_iCapacity;  // ͼ�����������ɵĶ�����
	int m_iNodeCount;  //�Ѿ���ӵĶ��㣨��㣩����
	Node* m_pNodeArray;  //������Ŷ��������
	int* m_pMatrix;    //��������ڽӾ��������

	Edge* m_pEdge;// ������ѡ����С�ߵı߼��ϣ��ߵ�ָ�룩
};




