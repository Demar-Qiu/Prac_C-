


class Node
{
public:
	Node();
	Node* SearchNode(int nodeIndex);
	void DeleteNode();   //µ¥´¿ÊÇÉ¾³ý²Ù×÷
	int index;
	int data;
	Node* pLChild;
	Node* pRChild;
	Node* pParent;
};