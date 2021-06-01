#pragma once
#include"Node1.h"
#include<stdio.h>

/* �������������ʾ */
/*
   ע��������Ϊ�Ƕ�������ÿ������и��Ե���������������������

   ������Ҫͨ���ڵ�������ɣ������ͱ�ע��͵�����һ����һ��next���֣�
   �����������Һ��Ӻ͸��ף����Բ�ͬ��

*/
class Tree1
{
public:
	Tree1();
	~Tree1();
	Node1* SearchNode(int nodeIndex);
	bool AddNode(int nodeIndex, int direction, Node1* pNode);  //��ӽ��
	bool DeleteNode(int nodeIndex, Node1* pNode);  //ɾ�����
	void PreorderTraversal();  //ǰ�����
	void InorderTraversal();    //�������
	void PostorderTraversal();  //�������
	void LevelorderTraversal(); //�������
private:
	Node1* m_pRoot;
};