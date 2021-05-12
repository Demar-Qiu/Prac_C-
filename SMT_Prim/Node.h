#pragma once
#pragma once

class Node
{
public:
	Node(char data = 0);   //构造函数
	char m_cData;       //结点数据值
	bool m_bIsVisited;  //标记当前结点有没有被访问过
};