#include<stdlib.h>
#include<iostream>
using namespace std;


//ɢ�к������ó���������
//��ͻ������ÿ��Ŷ�ַ��������̽�ⷨ
int hashFunc(int key, int length);
int initHashTable(int* hashTable, int length);  //�ɹ�����0��ʧ�ܷ���-1
int hashInsert(int* hashTable, int key, int length);   //�ɹ�����0��ʧ�ܷ���-1