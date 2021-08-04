#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>


void printVector(vector<int>&v)
{
	//for(vector<int>::iterator it=v.begin();it!=v.end();++i)
	for (auto i : v)
	{
		cout << i << " ";
	}
	cout << endl;

}

//vector�Ĺ��캯��
void test10()
{
	vector<int>u1;  //Ĭ���޲ι��죨֮���ٸ�ֵ���룩
	for (int i = 0; i < 10; i++)
	{
		u1.push_back(i);
	}
	printVector(u1);

	vector<int>u2(u1.begin(), u1.end());
	printVector(u2);

	vector<int>u3(10, 22);
	printVector(u3);

	vector<int>u4(u3);
	printVector(u4);
}


//vector��ֵ(=,assign)
void test11()
{
	vector<int>v1;
	for (int i = 1; i < 9; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	vector<int>v2;
	v2 = v1;
	printVector(v2);

	//assign
	vector<int>v3;
	v3.assign(v2.begin(), v2.end());
	printVector(v3);

	vector<int>v4;
	v4.assign(10,0);
	printVector(v4);

}


//vector�����ʹ�С(capacity,size)
void test12()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	if (v1.empty())
	{
		cout << "v1Ϊ��" << endl;
	}
	else
	{
		cout << "v1��Ϊ��" << endl;
		cout << "v1����Ϊ��" << v1.capacity() << endl;
		cout << "v1��СΪ��" << v1.size() << endl;
	}
	//����ָ����С
	v1.resize(15);  //��ָ������������Ĭ��Ϊ0���
	printVector(v1);
	v1.resize(5);
	printVector(v1);
}

//vector�����ɾ����β���βɾpush_back��pop_back
//                ������ָ�����insert��ɾ��ָ��erase�����ȫ��Ԫ��clear��
void test13()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	printVector(v);

	v.pop_back();
	printVector(v);
	
	//ע������ǵ�����
	v.insert(v.begin(), 55);//����λ����55
	printVector(v);
	v.erase(v.begin());
	printVector(v);
	v.clear();

}

//vector���ݴ�ȡ
void test14()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < v.size(); i++)
	{
		cout << v.at(i) <<" ";  //ִ���˶��±�Խ��ļ��
	}
	cout << endl;

	//��ȡ��һ��Ԫ�غ����һ��Ԫ��
	cout << "the first element: " << v.front() << endl;
	cout << "the last element: " << v.back() << endl;
}

//�������� v1.swap(v2) //����v1 v2���ݣ�ʵ����;�ﵽ�����ڴ��Ч��


//Ԥ���ռ䣨reserve��
void test15()
{
	vector<int>v;

	//����reserve��Ԥ���ռ䣬Ԥ��100000�ռ�
	v.reserve(100000);//��ʱnum��Ϊ1

	int num = 0; //ͳ���ڴ濪�ٵĴ���
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];  //ÿ�ο��ٶ����µ��׵�ַ����ʱҪ��30��
			num++;
		}
	}

	cout << "num= " << num << endl;
}


int main()
{
	//test10();
	//test11();
	//test12();
	//test13();
	//test14();
	 test15();

	return 0;
}