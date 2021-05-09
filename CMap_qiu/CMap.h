#pragma once
#include<iostream>
using namespace std;
#include"Node.h"


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


private:
	bool getValueFromMatrix(int row, int col, int& val);//�Ӿ����л�ȡȨֵ
	void breadthFirstTraverseImpl();
private:
	int m_iCapacity;  // ͼ�����������ɵĶ�����
	int m_iNodeCount;  //�Ѿ���ӵĶ��㣨��㣩����
	Node* m_pNodeArray;  //������Ŷ��������
	int* m_pMatrix;    //��������ڽӾ��������
};