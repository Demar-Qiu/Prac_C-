#include<stdlib.h>
#include<iostream>
#define max ~(1<<(sizeof(int)*8-1))
using namespace std;

/* ��ϣ�� */

//ɢ�к������ó���������: f(key)=key mod p(pһ��ȡ����)
//��ͻ������ÿ���Ѱַ��������̽�ⷨ: hi(key)=(h(key)+di) mod TableSize
//                  i��ʾ������i�γ�ͻ������di������ͬ�Ľ����ͻ����������̽�⡢ƽ��̽���˫ɢ�У�            

int hashFunc(int key, int length);
int initHashTable(int* hashTable, int length);  //�ɹ�����0��ʧ�ܷ���-1
int hashInsert(int* hashTable, int key, int length);   //�ɹ�����0��ʧ�ܷ���-1
static enum status{failure=-1,success=0}flag;
int hashSearch(int* hashTable, int key, int length);

void test();
int main()
{
	test();

	return 0;
}

// ��ʼ����ϣ��
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

// ��ϣ����(��keyת��Ϊ���ʵ�ɢ�е�ַ)
int hashFunc(int key, int length)
{
	if (key == max || length <= 0)
	{
		return -1;
	}
	return key % length;   //����ȡ�෨��f(key)=key mod p(pһ��ȡ����)
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
		if (hashTable[hashAddr] != max)  //��ϣ��ͻ
		{
			hashAddr = (hashAddr + 1) % 12;// ����Ѱַ������̽�ⷨ��������һ���ɴ�����ݵĿռ�
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

// ���ҹ�ϣ��ļ�ֵkey
int hashSearch(int* hashTable, int key, int length)
{
	flag = success;
	if (NULL == hashTable || length <= 0)
	{
		flag = failure;
		return -1;
	}
	int hashAddr = hashFunc(key, length);
	while (key != hashTable[hashAddr]) //����ɢ�е�ַ��ֵ��ΪҪ���ҵ�key
	{
		hashAddr = (hashAddr + 1) % length; //����һ����ַ
		//��̽�⵽��һ����ַΪmax˵����û���ҵ�����ѭ������һ���ֻص���ԭʼ��hashAddr
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
	cout << "��ϣ�������Ԫ�أ�";
	for (int i = 0; i < 12; i++)
	{
		cout << arr[i] << " ";
		hashInsert(hashTable, arr[i], 12);
	}
	cout << endl;

	cout << "��ϣ��";
	for (int i = 0; i < 12; i++)
	{
		cout << hashTable[i] << " ";
	}
	cout << endl;

	cout << "��Ӧ����Ԫ�������ڹ�ϣ�����Ԫ�أ�";
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
	cout << "����1��" << endl;
	int rett = hashSearch(hashTable, 1, 12);
	if (rett == -1 && flag == failure)
	{
		cout << "search " << 1 << " fail" << endl;
	}
	cout << hashTable[rett] <<endl;
}


















