#pragma once
class Array
{
public:
	Array(int count);  //���캯��
	Array(const Array& arr);  // �������캯��
	~Array();
	void setCount(int count);
	int getCount();
	void printAddr();  // ��ӡָ���ַ
	void printArr();  //��ӡ��ַ�ĸ�ֵ
private:
	int m_iCount;  // Ԫ�ظ���
	int* m_pArr;
};
