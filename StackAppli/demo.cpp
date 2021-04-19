#include<iostream>
#include"stdlib.h"
#include"MyStack.h"
#include"Coordinate.h"
using namespace std;

/***
  栈应用---数制转换

  描述：输入任意十进制正整数 N，分别输出该整 N 的二进制、八进制、十六进制数
  公式：N = （N div d）* d + N mod d 即短除法
   

  如十进制转八进制：
     N      N div 8    N mod 8
    1348      168         4
	 168       21         0
	  21        2         5
	   2        0         2     按栈一个个打印出来
   
   通过实例灵活掌握栈机制的使用技巧
 ***/

/* 定义进制数 */
#define BINARY 2
#define OCTONARY 8
#define HEXADECIMAL 16

int main()
{
	char num[] = "0123456789ABCDEF";  //为了得到十六进制

	MyStack<int> *pStack = new MyStack<int>(30);

	int N = 2016;
	int mod = 0;  //存余数

	while (N != 0)
	{
		mod = N % HEXADECIMAL;
		pStack->push(mod);
		N = N / HEXADECIMAL;
	}
	//pStack->stackTraverse(false); //由栈顶到栈底遍历

	//for (int i = pStack->stackLength() - 1; i >= 0; i--)
	//{
	//	num[pStack[i]];  //行不通
	//}
	int elem=0;
	while (!pStack->stackEmpty())
	{
		pStack->pop(elem);    //先将元素由栈顶一个个pop出来
		cout << num[elem];    //再对应num的下标
	}

	delete pStack;
	pStack = NULL;


	return 0;
}