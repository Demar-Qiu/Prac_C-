#pragma once

/* 数组表示二叉树 */

class Tree
{
public:
	Tree(int size, int* pRoot);  // 创建树
	~Tree();  //销毁树
	int* SearchNode(int nodeIndex); //根据索引寻找节点
	bool AddNode(int nodeIndex,int direction,int* pNode);  // 添加节点
	bool DeleteNode(int nodeIndex, int* pNode); // 删除节点
	void TreeTraverse();  

private:
	int* m_pTree;
	int m_iSize;

};