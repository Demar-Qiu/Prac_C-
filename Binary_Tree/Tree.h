#pragma once


class Tree
{
public:
	Tree(int size,int *pRoot);    //创建树,包括树的大小和根节点
	~Tree();          //销毁树
	int *SearchNode(int nodeIndex);  //根据索引寻找节点
	bool AddNode(int nodeIndex, int direction, int *pNode);  //添加结点
	bool DeleteNode(int nodeIndex, int *pNode);  //删除结点
	void TreeTraverse();        //遍历结点

private:
	int *m_pTree;
	int m_iSize;    //整个数组的大小
};