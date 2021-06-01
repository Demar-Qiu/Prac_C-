#pragma once

class Node1
{
public:
	Node1();
	Node1* SearchNode(int nodeIndex);
	void DeleteNode();
	void PreorderTraversal();
	void InorderTraversal();
	void PostorderTraversal();
	void LevelorderTraversal();

	int index;  //����
	int data;  // ����
	Node1* pLChild;
	Node1* pRChild;
	Node1* pParent;
};