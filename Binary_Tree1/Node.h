#pragma once

class Node
{
public:
	Node();  //初始化以下数据成员
	Node *SearchNode(int nodeIndex);
	int index; //索引
	int data;  //数据
	Node*pLChild;  //左孩子指针
	Node*pRChild;  //右孩子指针
	Node*pParent;  //父亲指针
};