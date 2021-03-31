#pragma once
class Array
{
public:
	Array(int count);  //构造函数
	Array(const Array& arr);  // 拷贝构造函数
	~Array();
	void setCount(int count);
	int getCount();
	void printAddr();  // 打印指针地址
	void printArr();  //打印地址的赋值
private:
	int m_iCount;  // 元素个数
	int* m_pArr;
};
