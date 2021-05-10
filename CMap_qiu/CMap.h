#pragma once
#include<iostream>
using namespace std;
#include"Node.h"
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
private:
	bool getValueFromMatrix(int row, int col, int& val);//�Ӿ����л�ȡȨֵ(��)
	void breadthFirstTraverseImpl(vector<int>preVec);  //������ȱ���ʵ�ֺ���
private:
	int m_iCapacity;  // ͼ�����������ɵĶ�����
	int m_iNodeCount;  //�Ѿ���ӵĶ��㣨��㣩����
	Node* m_pNodeArray;  //������Ŷ��������
	int* m_pMatrix;    //��������ڽӾ��������
};