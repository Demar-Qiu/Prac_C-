#include<string>
#include"MyArray.h"
using namespace std;

/* ��ģ��
      ������ģ��MyArray,��Ա���������졢������display����
                        ���ݳ�Ա��m_pArr

*/

int main()
{
    MyArray<int, 5, 6>arr;
    arr.Display();

    return 0;
}