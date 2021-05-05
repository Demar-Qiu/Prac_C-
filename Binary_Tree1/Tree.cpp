#include"Tree.h"


Tree::Tree()
{
	m_pRoot = new Node();
}

Node* Tree::SearchNode(int nodeIndex)
{
	m_pRoot->SearchNode(nodeIndex);
}