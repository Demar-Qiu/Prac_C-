#pragma once

/* �����ʾ������ */

class Tree
{
public:
	Tree(int size, int* pRoot);  // ������
	~Tree();  //������
	int* SearchNode(int nodeIndex); //��������Ѱ�ҽڵ�
	bool AddNode(int nodeIndex,int direction,int* pNode);  // ��ӽڵ�
	bool DeleteNode(int nodeIndex, int* pNode); // ɾ���ڵ�
	void TreeTraverse();  

private:
	int* m_pTree;
	int m_iSize;

};