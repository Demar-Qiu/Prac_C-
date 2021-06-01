#include"Node1.h"
#include<iostream>
#include<queue>
using namespace std;


Node1::Node1()
{
	index = 0;
	data = 0;
	pLChild = NULL;
	pRChild = NULL;
	pParent = NULL;
}

Node1* Node1::SearchNode(int nodeIndex)
{
	if (this->index == nodeIndex)
	{
		return this;
	}
	Node1* temp = NULL;
	if (this->pLChild != NULL)
	{
		if (this->pLChild->index == nodeIndex)
		{
			return this->pLChild;
		}
		else
		{
			temp = this->pLChild->SearchNode(nodeIndex);
			if (temp != NULL)
			{
				return temp;
			}
		}
	}
	if (this->pRChild != NULL)
	{
		if (this->pRChild->index == nodeIndex)
			return this->pRChild;
		else
		{
			temp = this->pRChild->SearchNode(nodeIndex);
			return temp;
		}
	}
	return NULL;
}


void Node1::DeleteNode()
{
	//��ɾ�����Һ������ÿգ����ɾ���Լ�
	if (this->pLChild != NULL)
	{
		this->pLChild->DeleteNode();
	}
	if (this->pRChild != NULL)
	{
		this->pRChild->DeleteNode();
	}
	if (this->pParent != NULL) 
	{
		if (this->pParent->pLChild == this)
		{
			this->pParent->pLChild = NULL;  
			//��ָ�벻��Ϊ�գ�֮����ָ����ӽڵ��ͷź��ǲ��ɷ��ʵģ�����ʱָ����Ȼָ��ò��ɷ��ʵ��ӽڵ����򣬻����
		}
		if (this->pParent->pRChild == this)
		{
			this->pParent->pRChild = NULL;
		}
	}
	delete this;

}


void Node1:: PreorderTraversal()
{
	cout << this->index << "," << this->data << endl;
	if (this->pLChild != NULL)
	{
		this->pLChild->PreorderTraversal();
	}
	if (this->pLChild != NULL)
	{
		this->pRChild->PreorderTraversal();
	}
}

void Node1::InorderTraversal()
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

void Node1::PostorderTraversal()
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


void Node1::LevelorderTraversal()
{
	if (this != NULL)
	{
		queue<Node1*>q;
		q.push(this);
		while (!q.empty())
		{
			Node1* p = q.front();
			q.pop();
			cout << p->index << "," << p->data << endl;
			if (p->pLChild != NULL)
			{
				q.push(p->pLChild);
			}
			if(p->pRChild != NULL)
			{
				q.push(p->pRChild);
			}
		}
	}
}






