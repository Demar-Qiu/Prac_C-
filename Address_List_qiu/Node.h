#pragma once
#include"Person.h"

class Node   //链表的节点类
{
public:
	Person data;     //数据域为Person类
	Node* next;   //指针域
	void printNode();

};