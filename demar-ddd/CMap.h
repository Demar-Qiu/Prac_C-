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
	bool addNode(Node2* pNode);  //��ͼ�м��붥��
	void resetNode();  //���ö��㣨����������Ϊû���ʹ���
	bool setValueToMatrixForDirectedGraph(int row, int col, int val = 1); //Ϊ����ͼ�����ڽӾ���,valĬ��Ȩֵ1
	bool setValueToMatrixForUndirectedGraph(int row, int col, int val = 1);//Ϊ����ͼ�����ڽӾ���
	void printMatrix();  //��ӡ�ڽӾ���


private:
	bool getValueFromMatrix(int row, int col, int& val);//�Ӿ����л�ȡȨֵ(��)

private:
	int m_iCapacity;  //ͼ���������ɵĶ�����
	int m_iNodeCount;  //��ǰ�Ѿ�����˵Ķ������
	Node2* m_pNodeArray;  //������Ŷ��������
	int* m_pMatrix;  //��������ڽ׾��������

};





