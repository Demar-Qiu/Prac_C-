#include<iostream>
#include"stdlib.h"
#include"MyStack.h"
#include"Coordinate.h"
using namespace std;

/***
  ջӦ��---����ת��

  ��������������ʮ���������� N���ֱ�������� N �Ķ����ơ��˽��ơ�ʮ��������
  ��ʽ��N = ��N div d��* d + N mod d ���̳���
   

  ��ʮ����ת�˽��ƣ�
     N      N div 8    N mod 8
    1348      168         4
	 168       21         0
	  21        2         5
	   2        0         2     ��ջһ������ӡ����
   
   ͨ��ʵ���������ջ���Ƶ�ʹ�ü���
 ***/

/* ��������� */
#define BINARY 2
#define OCTONARY 8
#define HEXADECIMAL 16

int main()
{
	char num[] = "0123456789ABCDEF";  //Ϊ�˵õ�ʮ������

	MyStack<int> *pStack = new MyStack<int>(30);

	int N = 2016;
	int mod = 0;  //������

	while (N != 0)
	{
		mod = N % HEXADECIMAL;
		pStack->push(mod);
		N = N / HEXADECIMAL;
	}
	//pStack->stackTraverse(false); //��ջ����ջ�ױ���

	//for (int i = pStack->stackLength() - 1; i >= 0; i--)
	//{
	//	num[pStack[i]];  //�в�ͨ
	//}
	int elem=0;
	while (!pStack->stackEmpty())
	{
		pStack->pop(elem);    //�Ƚ�Ԫ����ջ��һ����pop����
		cout << num[elem];    //�ٶ�Ӧnum���±�
	}

	delete pStack;
	pStack = NULL;


	return 0;
}