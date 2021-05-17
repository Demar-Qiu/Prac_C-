#pragma once

class Node
{
public:
	Node();  //��ʼ���������ݳ�Ա
	Node *SearchNode(int nodeIndex);
	void DeleteNode();
	void PreorderTraversal();
	void InorderTraversal();
	void PostorderTraversal();
	void LevelorderTraversal();
	int index; //����
	int data;  //����
	Node*pLChild;  //����ָ��
	Node*pRChild;  //�Һ���ָ��
	Node*pParent;  //����ָ��
};



