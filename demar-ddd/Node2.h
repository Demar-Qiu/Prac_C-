#pragma once

class Node2
{
public:
	Node2(char data = 0);  //构造函数
	char m_cData;   //节点数据值
	bool m_bIsVisited;  //标记当前节点有没有被访问过

};