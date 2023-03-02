//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, m, sum = 0, minus = 999;
//	cin >> n >> m;
//	for (; n < m; n++)
//	{
//		if (n <= 1) continue;
//		else if (n <= 3)
//		{
//			sum += n;
//			minus = min(minus, n);
//		}
//		else
//		{
//			bool check = false;
//			for (int i = 2; i < n / 2; i++)
//			{
//				if (n % 2 == 0) check = true; break;
//			}
//			check ? sum : sum += n;
//		}
//	}
//	cout << sum;
//}