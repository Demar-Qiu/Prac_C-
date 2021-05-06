#pragma once
#include"Node.h"
#include<stdio.h>

class Tree
{
public:
	Tree();
	~Tree();
	Node *SearchNode(int nodeIndex);  //�������
	bool AddNode(int nodeIndex, int direction, Node *pNode);  //��ӽ��
	bool DeleteNode(int nodeIndex, Node *pNode);  //ɾ�����
	void PreorderTraversal();    //ǰ�����
	void InorderTraversal();    //�������
	void PostorderTraversal();  //�������

private:
	Node *m_pRoot; 

};