#pragma once

class Node
{
public:
	Node();  //��ʼ���������ݳ�Ա
	Node *SearchNode(int nodeIndex);
	int index; //����
	int data;  //����
	Node*pLChild;  //����ָ��
	Node*pRChild;  //�Һ���ָ��
	Node*pParent;  //����ָ��
};