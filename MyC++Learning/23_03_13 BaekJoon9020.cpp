#include <iostream>
#include <vector>
using namespace std;
vector<int> v;

bool IsPrime(int num)
{
	for (int i = 2; i <= num / 2; i++) 
		if (num % 2 == 0) return false;
	return true;
}
void SetPrime(int min, int max)
{
	for (int i = min + 1; i <= max; i++)
		if (IsPrime(i)) v.push_back(i);
}
void PrintSum(int num)
{
	int ans[2] = { 0, 10001 };
	for (int i : v)
	{
		if (i >= num) break;
		for (int j : v)
		{
			if (i + j > num) break;
			if (abs(ans[0] - ans[1]) > abs(i - j) && i + j == num)
			{
				ans[0] = i, ans[1] = j;
			}
		}
	}
	cout << ans[0] << " " << ans[1] << "\n";
}
int main()
{
	int n, min = 2;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		SetPrime(min, t);
		PrintSum(t);
		min = t;
	}
}