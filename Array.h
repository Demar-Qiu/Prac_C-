#pragma once
class Array
{
public:
	Array(int len);
	~Array();
	void setLen(int len);   // len表示数组长度
	int getLen();
	//Array& printInfo();
	Array* printInfo();

	//Array(int count);  //构造函数
	//Array(const Array& arr);  // 拷贝构造函数
	void setCount(int count);
	int getCount();
	void printAddr();  // 打印指针地址
	void printArr();  //打印地址的赋值
private:
	int len;

	int m_iCount;  // 元素个数
	int* m_pArr;
};
