#include<iostream>
using namespace std;


// �˴������Ķ���Ѳ���Ҳ���Է�����������൱��

/* 
*   ���ڶ���ѵĻ���ѧϰ
*   
    ����ѣ�����Ϊһ����ȫ����������Ϊ��С�Ѻ����ѡ�
            ��С�ѣ�����ĸ��ڵ㶼С�������Һ��ӣ�
            ���ѣ�����ĸ��ڵ㶼���������Һ��ӡ�

            ��Ϊ�������ɾ�����Ĳ������洢��ʽΪ˳��洢�������顣
                ͨ�����ϸ����͡��³����������ҵ���
     
*/


//  �ϸ���������(������Ĺ���)
void upAdjust(int arr[],int size)   //arr�������Ķ�
{
    int childIndex = size - 1;  //�����λ�����ڶ���ѵ����һ��λ��
    int parentIndex = (childIndex - 1) / 2; //�丸�ڵ�
    // temp��������Ҷ�ӽڵ�ֵ���������ĸ�ֵ����
    int temp = arr[childIndex];
    while (childIndex > 0 && temp < arr[parentIndex])   //�����Եõ���С��Ϊ��
    {
        // �����������������ڵ㵥��ֵ����,�����ӽڵ��ϸ�ǰ��λ��
        arr[childIndex] = arr[parentIndex];
        childIndex = parentIndex;
        parentIndex = (parentIndex - 1) / 2;

    }
    arr[childIndex] = temp;   //�ϸ���ɺ󽫸ò���Ľ��ֵ��ֵ����Ӧλ��

}


//  �³���������(ɾ�������������������ת��Ϊ����ѵĹ���)  
void downAdjust(int arr[], int parentIndex, int length)   //arr�������Ķ�,parentIndexҪ�³��ĸ��ڵ� ��length�ѵ���Ч��С
{
    // temp���游�ڵ��ֵ���������ĸ�ֵ����
    int temp = arr[parentIndex];
    int childIndex = 2*parentIndex+1;  //��λ����
    while (childIndex<length)   
    {
        //������Һ��ӣ����Һ���С�����ӣ���λ���Һ��ӣ����ڵ�������Һ��ӽڵ��и�С���Ǹ�����֮������
        if (childIndex + 1 < length && arr[childIndex + 1] < arr[childIndex])
        {
            childIndex++;  // ��λ���Һ���
        }
        // ������ڵ�С���κ�һ�����ӵ�ֵ����ֱ������(˵���³����)
        if (temp <= arr[childIndex])     //�����Եõ���С��Ϊ��  
            break;                       //��Ϊ���︸�ڵ����Ҫ���������ӱȴ�С�����Բ��÷����ܵ�whileѭ��������

        // ���������������ӽڵ㵥��ֵ����,���Ǹ��ڵ��³�ǰ��λ��
        arr[parentIndex] = arr[childIndex];
        parentIndex=childIndex;
        childIndex=2*childIndex+1;

    }
    arr[parentIndex] = temp;   //�³���ɺ󽫸ý��ֵ��ֵ����Ӧλ��

}

// ���������
void bulidHeap(int arr[], int size)
{
    // �����һ����Ҷ�ӽڵ㿪ʼ�����ν��С��³�������
    for (int i = (size - 2) / 2; i >= 0; i--)
    {
        downAdjust(arr, i, size);
    }

}

/* Ҫ�ع��ɶ���ѵĶ�����
* 
        7
       / \
      1   3
     /\  / \
    10 5 2  8
    /\
   9  6

 */


int main_1()
{
    int arr0[] = { 1,3,2,6,5,7,8,9,10,0 };   //��0�ڵ����
    int size0 = sizeof(arr0) / sizeof(int);
    upAdjust(arr0,size0);

    for (int k = 0; k < size0; k++)
    {
        cout << arr0[k] << " ";  //���0 1 2 6 3 7 8 9 10 5
    }
    cout << endl;
    int arr1[] = { 7,1,3,10,5,2,8,9,6 };  //���������
    int size1 = sizeof(arr1) / sizeof(int);
    bulidHeap(arr1,size1);

    for (int k = 0; k < size1; k++)
    {
        cout << arr1[k] << " ";  //���1 5 2 6 7 3 8 9 10
    }

    return 0;
}