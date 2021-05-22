#include<stdlib.h>
#include<iostream>
#define max ~(1<<(sizeof(int)*8-1))
using namespace std;

/* 哈希表 */

//散列函数采用除留余数法: f(key)=key mod p(p一般取素数)
//冲突解决采用开放寻址法的线性探测法: hi(key)=(h(key)+di) mod TableSize
//                  i表示发生第i次冲突，这里di决定不同的解决冲突方案（线性探测、平方探测喝双散列）            

int hashFunc(int key, int length);
int initHashTable(int* hashTable, int length);  //成功返回0，失败返回-1
int hashInsert(int* hashTable, int key, int length);   //成功返回0，失败返回-1
static enum status{failure=-1,success=0}flag;
int hashSearch(int* hashTable, int key, int length);

void test();
int main()
{
	test();

	return 0;
}

// 初始化哈希表
int initHashTable(int* hashTable, int length) 
{
	if (NULL == hashTable || length <= 0)
		return -1;
	for (int i = 0; i < length; i++)
	{
		hashTable[i] = max;
	}
	return 0;
}

// 哈希函数(将key转化为合适的散列地址)
int hashFunc(int key, int length)
{
	if (key == max || length <= 0)
	{
		return -1;
	}
	return key % length;   //除留取余法：f(key)=key mod p(p一般取素数)
}

int hashInsert(int* hashTable, int key, int length)
{
	if (NULL == hashTable || length <= 0)
		return -1;
	int hashAddr = hashFunc(key, length);
	if (-1 == hashAddr)
	{
		return -1;
	}
	for (int i = 0; i < length; i++)
	{
		if (hashTable[hashAddr] != max)  //哈希冲突
		{
			hashAddr = (hashAddr + 1) % 12;// 开放寻址的线性探测法，查找下一个可存放数据的空间
		}
		else
			break;
	}
	if (max == hashTable[hashAddr])
	{
		hashTable[hashAddr] = key;
		return 0;
	}
	return -1;
}

// 查找哈希表的键值key
int hashSearch(int* hashTable, int key, int length)
{
	flag = success;
	if (NULL == hashTable || length <= 0)
	{
		flag = failure;
		return -1;
	}
	int hashAddr = hashFunc(key, length);
	while (key != hashTable[hashAddr]) //若此散列地址的值不为要查找的key
	{
		hashAddr = (hashAddr + 1) % length; //查下一个地址
		//若探测到下一个地址为max说明还没有找到，或循环找了一遍又回到了原始的hashAddr
		if (max == hashTable[hashAddr] || hashAddr == hashFunc(key, length))
		{
			flag = failure;
			return -1;
		}
	}
	return hashAddr;

}

void test()
{
	int arr[12] = { 12,67,56,16,25,37,22,29,15,47,48,34 };
	int* hashTable = new int[12];
	int ret = initHashTable(hashTable, 12);
	if (-1 == ret)
	{
		cout << "initHashTable fail!"<<endl;
	}
	cout << "哈希表待插入元素：";
	for (int i = 0; i < 12; i++)
	{
		cout << arr[i] << " ";
		hashInsert(hashTable, arr[i], 12);
	}
	cout << endl;

	cout << "哈希表：";
	for (int i = 0; i < 12; i++)
	{
		cout << hashTable[i] << " ";
	}
	cout << endl;

	cout << "对应插入元素序列在哈希表查找元素：";
	for (int i = 0; i < 12; i++)
	{
		int ret = hashSearch(hashTable, arr[i], 12);
		if (ret == -1 && flag == failure)
		{
			cout << "search " << arr[i] << " fail" << endl;
		}
		cout << hashTable[ret] << " ";
	}
	cout << endl; 
	cout << "查找1：" << endl;
	int rett = hashSearch(hashTable, 1, 12);
	if (rett == -1 && flag == failure)
	{
		cout << "search " << 1 << " fail" << endl;
	}
	cout << hashTable[rett] <<endl;
}


















