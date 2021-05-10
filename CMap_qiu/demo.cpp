#include<iostream>
#include<stdlib.h>
#include"CMap.h"
using namespace std;

/*
   图的存储（邻接矩阵）与图的遍历（深度优先和广度优先）
*/

/* 实现如下无向图
   
       A
     /  \
    B    D
   / \  / \
  C   F G-H
   \ /
    E
  
 */

int main()
{
    CMap *pMap = new CMap(8);

    Node* pNodeA = new Node('A');
    Node* pNodeB = new Node('B');
    Node* pNodeC = new Node('C');
    Node* pNodeD = new Node('D');
    Node* pNodeE = new Node('E');
    Node* pNodeF = new Node('F');
    Node* pNodeG = new Node('G');
    Node* pNodeH = new Node('H');


    pMap->addNode(pNodeA);
    pMap->addNode(pNodeB);
    pMap->addNode(pNodeC);
    pMap->addNode(pNodeD);
    pMap->addNode(pNodeE);
    pMap->addNode(pNodeF);
    pMap->addNode(pNodeG);
    pMap->addNode(pNodeH);

    // 添加弧
    pMap->setValueToMatrixForUndirectedGraph(0, 1); // A-B
    pMap->setValueToMatrixForUndirectedGraph(0, 3); // A-D
    pMap->setValueToMatrixForUndirectedGraph(1, 2); // B-C
    pMap->setValueToMatrixForUndirectedGraph(1, 5); // B-F
    pMap->setValueToMatrixForUndirectedGraph(3, 6); // D-G
    pMap->setValueToMatrixForUndirectedGraph(3, 7); // D-H
    pMap->setValueToMatrixForUndirectedGraph(6, 7); // G-H
    pMap->setValueToMatrixForUndirectedGraph(2, 4); // C-E
    pMap->setValueToMatrixForUndirectedGraph(4, 5); // E-F

    pMap->printMatrix();

    cout << endl;

    pMap->depthFirstTraverse(0);  //深度优先遍历

    pMap->resetNode();
    cout << endl;
    pMap->breadthFirstTraverse(0); //广度优先遍历
    
        


    return 0;

}











