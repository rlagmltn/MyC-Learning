#include <iostream>
using namespace std;
int a[102][102];

int main()
{
	int n, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		for (int j = x; j < x + 10; j++)
		{
			for (int k = y; k < y + 10; k++)
			{
				a[j][k] = 1;
			}
		}
	}
	for (int i = 0; i < 10000; i++)
	{
		if (a[i / 100][i % 100]) sum++;
	}
	cout << sum;
}