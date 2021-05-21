#include<stdlib.h>
#include<iostream>
using namespace std;


//散列函数采用除留余数法
//冲突解决采用开放定址法的线性探测法
int hashFunc(int key, int length);
int initHashTable(int* hashTable, int length);  //成功返回0，失败返回-1
int hashInsert(int* hashTable, int key, int length);   //成功返回0，失败返回-1