#include<iostream>
#include"Worker.h"
using namespace std;

Worker::Worker(string code, string color):Person("Worker"+color)//用初始化列表使Worker对Person数据初始化
                                            // 避免在Worker中重复Person的逻辑
{
	m_strCode = code;

	cout << "Worker()" << endl;
}

Worker::~Worker()
{
	cout << "~Worker()" << endl;
}

void Worker::carry()
{
	cout << m_strCode << endl;
	cout << "Worker--carry()" << endl;

}