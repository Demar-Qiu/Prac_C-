#pragma once
class Array
{
public:
	Array(int len);
	~Array();
	void setLen(int len);   // len��ʾ���鳤��
	int getLen();
	//Array& printInfo();
	Array* printInfo();

	//Array(int count);  //���캯��
	//Array(const Array& arr);  // �������캯��
	void setCount(int count);
	int getCount();
	void printAddr();  // ��ӡָ���ַ
	void printArr();  //��ӡ��ַ�ĸ�ֵ
private:
	int len;

	int m_iCount;  // Ԫ�ظ���
	int* m_pArr;
};
