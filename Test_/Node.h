


class Node
{
public:
	Node();
	Node* SearchNode(int nodeIndex);
	void DeleteNode();   //������ɾ������
	int index;
	int data;
	Node* pLChild;
	Node* pRChild;
	Node* pParent;
};