#pragma once


class Tree
{
public:
	Tree(int size,int *pRoot);    //������,�������Ĵ�С�͸��ڵ�
	~Tree();          //������
	int *SearchNode(int nodeIndex);  //��������Ѱ�ҽڵ�
	bool AddNode(int nodeIndex, int direction, int *pNode);  //��ӽ��
	bool DeleteNode(int nodeIndex, int *pNode);  //ɾ�����
	void TreeTraverse();        //�������

private:
	int *m_pTree;
	int m_iSize;    //��������Ĵ�С
};