#pragma once

class Edge
{
public:
	Edge(int nodeIndexA = 0, int nodeIndexB = 0, int weightValue = 0);
	int m_iNodeIndexA;   //边的一头结点的索引
	int m_iNodeIndexB;   //边的另一头结点的索引
	int m_iWeightValue;  //边上的权值
	bool m_bSelected;    //标识是否边已被选
};