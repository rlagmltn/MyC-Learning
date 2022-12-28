#include <iostream>
using namespace std;

int main()
{
	int n, sum = 5, cnt = 2	;
	cin >> n;
	if (n == 1)
	{	
		cout << n;
		return 0;
	}
	for (int i = 2; i < n; i += sum + 1, sum += 6, cnt++)
	{
		if (i <= n && i + sum > n)
		{
			cout << cnt;
			return 0;
		}
	}
}