#include"list.h"
#
#include<iostream>
#include<stdlib.h>
using namespace std;



int main()
{
	/*int e1 = 3;
	int e2 = 5;
	int e3 = 7;
	int e4 = 2;
	int e5 = 9;
	int e6 = 1;
	int e7 = 8;*/
	Coordinate e1(3, 5);
	Coordinate e2(5, 7);
	Coordinate e3(6, 8);
	//int e4 = 2;
	//int e5 = 9;
	//int e6 = 1;
	//int e7 = 8;
	//int temp = 0;
	Coordinate temp(0, 0);

	//int temp = 0;

	List* list1 = new List(10);

	list1->InsertElem(0, &e1);
	list1->InsertElem(1, &e2);
	list1->InsertElem(2, &e3);
	//list1->InsertElem(3, &e4);
	//list1->InsertElem(4, &e5);
	//list1->InsertElem(5, &e6);
	cout << "length:" << list1->ListLength() << endl;

	list1->ListTraversal();
	cout << endl;
	list1->DeleteElem(2,&temp);
	cout << "delete:" << temp << endl;
	list1->ListTraversal();

	cout << endl;
	list1->GetElem(0, &temp);
	cout << temp << endl;

	cout << endl;
	list1->GetPriorElem(&e3, &temp);   //获取前驱元素
	cout << "temp:" << temp << endl;

	return 0;
}



