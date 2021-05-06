#include"Node.h"
#include<iostream>
using namespace std;

Node::Node()
{
	index = 0;
	data = 0;
	pLChild = NULL;
	pRChild = NULL;
	pParent = NULL;
}


Node* Node::SearchNode(int nodeIndex)  //搜索结点
{
	if (this->index == nodeIndex)
	{
		return this;
	}

	Node* temp = NULL;
	if (this->pLChild != NULL)
	{
		if (this->pLChild->index == nodeIndex)
		{
			return this->pLChild;
		}
		else
		{
			temp=this->pLChild->SearchNode(nodeIndex); //左孩子继续找
			if (temp != NULL)    //找到则赋给temp
			{
				return temp;
			}
		}
	}
	
	if (this->pRChild != NULL)
	{
		if (this->pRChild->index == nodeIndex)
		{
			return this->pRChild;
		}
		else
		{
			temp=this->pRChild->SearchNode(nodeIndex);
			return temp;
		}
	}
	return NULL; 
}


void Node::DeleteNode()    //删除节点
{
	if (this->pLChild != NULL)   //先删除自己结点的左孩子
	{
		this->pLChild->DeleteNode();
	}
	  
	if (this->pRChild != NULL)  //删除自己结点的右孩子
	{
		this->pRChild->DeleteNode();
	}
	if (this->pParent != NULL)  //将父亲节点左右孩子指针置为0
	{
		if (this->pParent->pLChild == this)
		{
			this->pParent->pLChild = NULL;
		}
		if (this->pParent->pRChild == this)
		{
			this->pParent->pRChild = NULL;
		}
	}
	delete this;  //删除自己结点
}


void Node::PreorderTraversal()
{
	cout << this->index << "," << this->data << endl;
	if (this->pLChild != NULL)
	{
		this->pLChild->PreorderTraversal();
	}
	if (this->pRChild != NULL)
	{
		this->pRChild->PreorderTraversal();
	}
}

void Node:: InorderTraversal()
{
	if (this->pLChild != NULL)
	{
		this->pLChild->InorderTraversal();
	}

	cout << this->index << "," << this->data << endl;

	if (this->pRChild != NULL)
	{
		this->pRChild->InorderTraversal();
	}
}

void Node::PostorderTraversal()
{
	if (this->pLChild != NULL)
	{
		this->pLChild->PostorderTraversal();
	}

	if (this->pRChild != NULL)
	{
		this->pRChild->PostorderTraversal();
	}

	cout << this->index << "," << this->data << endl;
}