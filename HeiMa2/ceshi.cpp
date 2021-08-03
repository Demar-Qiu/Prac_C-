#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;


/* Pro：给定两个正整数 a,b，求最小和最大的 c 满足 a mod c=b mod c，满足c−1为正整数，且c≤max(a,b)。
        其中的 mod 表示取模运算。 */
// Input:第一行一个数 T(1≤T≤1000) 表示一共有T组数据,对于每一组数据，输入一行两个数 a,b (1≤a,b≤1000000000)。
// Output:对每组数据，输出一行两个数分别表示最小与最大的c，如果不存在满足题意的c，则输出一行两个 -1 −1。

vector<int> output(vector<int>& input) {
	sort(input.begin(), input.end());
	int a = input[1], b = input[0];

	int low = 0;
	int high = 0;

	int s = abs(a - b);
	int j = 0;
	for (j = 2; j <= sqrt(s); j++)  // 若a能拆成 b*c,则b,c中至少有一个小于根号a,只需判断根号a之前的数能否被 a 整除
	{
		if (s == 1)
		{
			break;
		}
		if (s % j == 0)
		{
			low = j;
			break;
		}
	}
	if (j > sqrt(s))    //说明为质数
	{
		low=s;
	}

	//for (int i = 2; i < max(a, b); i++) {
	//	if (abs(a - b) == 1)
	//	{
	//		break;
	//	}
	//	if (abs(a - b) % i == 0) {
	//		low = i;
	//		break;
	//	}
	//}
	high = abs(a - b);

	//int g = e * f / b;
	//if (low < high && low <= 1) return vector<int>{high, high};
	if (high <= 1) return vector<int>{-1, -1};

	return vector<int>{low, high};

}

int main()
{
	int n;
	cin >> n;
	vector<int> input(2, 0);
	vector<vector<int>> inputs;
	vector<int> res;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		input[0] = a;
		input[1] = b;
		inputs.push_back(input);

	}
	for (int i = 0; i < n; i++) {
		vector<int> input_tmp = inputs[i];
		res = output(input_tmp);

		int res1 = res[0], res2 = res[1];

		cout << res1 << " " << res2 << endl;

	}

	return 0;
}