#include<iostream>
#include"CMap.h"
#include<vector>
using namespace std;


/*  最小生成树之普利姆算法
*   关键：点集合、待选边集合、所选边集合（点、边、树）
* 
      A
     /|\
    B-F-E
    \ /\/
     C--D

A B C D E F
0 1 2 3 4 5

A-B 6   A-E 5   A-F 1  B-C 3
B-F 2   C-F 8   C-D 7 
D-F 4   D-E 2   E-F 9

*/


int main()
{
    CMap* pMap = new CMap(6);

    Node* pNodeA = new Node('A');
    Node* pNodeB = new Node('B');
    Node* pNodeC = new Node('C');
    Node* pNodeD = new Node('D');
    Node* pNodeE = new Node('E');
    Node* pNodeF = new Node('F');

    pMap->addNode(pNodeA);
    pMap->addNode(pNodeB);
    pMap->addNode(pNodeC);
    pMap->addNode(pNodeD);
    pMap->addNode(pNodeE);
    pMap->addNode(pNodeF);

    // 添加弧
    pMap->setValueToMatrixForUndirectedGraph(0,1,6); // A-B 6
    pMap->setValueToMatrixForUndirectedGraph(0,4,5); // A-E 5
    pMap->setValueToMatrixForUndirectedGraph(0,5,1); // A-F 1
    pMap->setValueToMatrixForUndirectedGraph(1,2,3); // B-C 3
    pMap->setValueToMatrixForUndirectedGraph(1,5,2); // B-F 2
    pMap->setValueToMatrixForUndirectedGraph(2,5,8); // C-F 8
    pMap->setValueToMatrixForUndirectedGraph(2,3,7); // C-D 7
    pMap->setValueToMatrixForUndirectedGraph(3,5,4); // D-F 4
    pMap->setValueToMatrixForUndirectedGraph(3, 4, 2);//D-E 2
    pMap->setValueToMatrixForUndirectedGraph(4, 5, 9);//E-F 9

    pMap->primTree(0);





    return 0;
}





