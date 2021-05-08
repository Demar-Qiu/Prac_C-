#pragma once
#include"Node.h"

class Tree
{
	Tree();    //������
	~Tree();   //������
	Node* SearchNode(int nodeIndex);
	bool AddNode(int nodeIndex, int direction,Node* pNode);
	bool DeleteNode(int nodeIndex, Node* pNode);
	void PreorderTraversal();
	void InorderTraversal();
	void PostorderTraversal();


private:
	Node* m_pRoot;  //���ĵ�һ�����Ҳ���Ǹ��ڵ� 

};