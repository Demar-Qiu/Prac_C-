#include<iostream>
#include"stdlib.h"
#include"MyStack.h"
using namespace std;

/*
ջӦ��---����ƥ��

��������������һ�����ţ������ж������Ƿ�ƥ��

�ַ���ʾ����[()]��[()()]��[()[()]]��[[()]


*/

int main()
{
	//Ҫ����ջ��һ���������ɨ����ַ���һ����¼��ǰ����Ҫ���ĸ��ַ��뵱ǰջ��ƥ��
	MyStack<char> *pStack = new MyStack<char>(30);
	MyStack<char> *pNeedStack = new MyStack<char>(30);

	char str[] = "[]()]";

	char currentNeed = 0;

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] != currentNeed)
		{
			pStack->push(str[i]);
			switch (str[i])
			{
			case '[':
				if (currentNeed != 0)
				{
					pNeedStack->push(currentNeed);
				}
				currentNeed = ']';
				break;
			case '(':
				if (currentNeed != 0)
				{
					pNeedStack->push(currentNeed);
				}
				currentNeed = ')';
				break;
			default:
				cout << "�ַ������Ų�ƥ��" << endl;
				return 0;
			}
		}
		else
		{
			char elem;
			pStack->pop(elem);
			if (!pNeedStack->pop(currentNeed))
			{
				currentNeed = 0;
			}
		}
	}

	if (pStack->stackEmpty())   //���б�׼
	{
		cout << "�ַ�������ƥ��" << endl;
	}
	else
	{
		cout << "�ַ������Ų�ƥ��" << endl;
	}

	return 0;
}
