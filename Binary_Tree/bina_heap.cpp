#include<iostream>
using namespace std;


// 此处所做的二叉堆操作也可以放入二叉树的类当中

/* 
*   关于二叉堆的基本学习
*   
    二叉堆：本质为一个完全二叉树，分为最小堆和最大堆。
            最小堆：任意的父节点都小于其左右孩子；
            最大堆：任意的父节点都大于其左右孩子。

            分为插入结点和删除结点的操作，存储方式为顺序存储，即数组。
                通过“上浮”和“下沉”进行自我调整
     
*/


//  上浮调整函数(插入结点的过程)
void upAdjust(int arr[],int size)   //arr待调整的堆
{
    int childIndex = size - 1;  //插入的位置是在二叉堆的最后一个位置
    int parentIndex = (childIndex - 1) / 2; //其父节点
    // temp保存插入的叶子节点值，用于最后的赋值操作
    int temp = arr[childIndex];
    while (childIndex > 0 && temp < arr[parentIndex])   //这里以得到最小堆为例
    {
        // 无需真正交换，父节点单向赋值即可,覆盖子节点上浮前的位置
        arr[childIndex] = arr[parentIndex];
        childIndex = parentIndex;
        parentIndex = (parentIndex - 1) / 2;

    }
    arr[childIndex] = temp;   //上浮完成后将该插入的结点值赋值到相应位置

}


//  下沉调整函数(删除结点操作、无序二叉树转化为二叉堆的过程)  
void downAdjust(int arr[], int parentIndex, int length)   //arr待调整的堆,parentIndex要下沉的父节点 ，length堆的有效大小
{
    // temp保存父节点的值，用于最后的赋值操作
    int temp = arr[parentIndex];
    int childIndex = 2*parentIndex+1;  //定位左孩子
    while (childIndex<length)   
    {
        //如果有右孩子，且右孩子小于左孩子，则定位到右孩子（父节点大于左右孩子节点中更小的那个，与之交换）
        if (childIndex + 1 < length && arr[childIndex + 1] < arr[childIndex])
        {
            childIndex++;  // 定位到右孩子
        }
        // 如果父节点小于任何一个孩子的值，则直接跳出(说明下沉完毕)
        if (temp <= arr[childIndex])     //这里以得到最小堆为例  
            break;                       //因为这里父节点可能要和两个孩子比大小，所以不好放在总的while循环条件里

        // 无需真正交换，子节点单向赋值即可,覆盖父节点下沉前的位置
        arr[parentIndex] = arr[childIndex];
        parentIndex=childIndex;
        childIndex=2*childIndex+1;

    }
    arr[parentIndex] = temp;   //下沉完成后将该结点值赋值到相应位置

}

// 构建二叉堆
void bulidHeap(int arr[], int size)
{
    // 从最后一个非叶子节点开始，依次进行“下沉”调整
    for (int i = (size - 2) / 2; i >= 0; i--)
    {
        downAdjust(arr, i, size);
    }

}

/* 要重构成二叉堆的二叉树
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
    int arr0[] = { 1,3,2,6,5,7,8,9,10,0 };   //将0节点插入
    int size0 = sizeof(arr0) / sizeof(int);
    upAdjust(arr0,size0);

    for (int k = 0; k < size0; k++)
    {
        cout << arr0[k] << " ";  //输出0 1 2 6 3 7 8 9 10 5
    }
    cout << endl;
    int arr1[] = { 7,1,3,10,5,2,8,9,6 };  //构建二叉堆
    int size1 = sizeof(arr1) / sizeof(int);
    bulidHeap(arr1,size1);

    for (int k = 0; k < size1; k++)
    {
        cout << arr1[k] << " ";  //输出1 5 2 6 7 3 8 9 10
    }

    return 0;
}