#include<iostream>
#include<stdlib.h>
#include"CMap.h"
using namespace std;

/*
   ͼ�Ĵ洢���ڽӾ�����ͼ�ı�����������Ⱥ͹�����ȣ�
*/

/* ʵ����������ͼ
   
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

    // ��ӻ�
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

    pMap->depthFirstTraverse(0);  //������ȱ���

    pMap->resetNode();
    cout << endl;
    pMap->breadthFirstTraverse(0); //������ȱ���
    
        


    return 0;

}











