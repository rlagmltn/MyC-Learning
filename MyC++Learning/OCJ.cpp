#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int DP[101] = { 0 };
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int h, k;
		cin >> h >> k;
		for (int j = 100; j > h; j--)
		{
			DP[j] = max(DP[j], DP[j - h] + k);
		}
	}
	cout << DP[100];
}