//#include <iostream>
//using namespace std;
//#define size 10001
//
//int main()
//{
//	int m, n;
//	int a[size] = { 0, };
//
//	a[0] = 1, a[1] = 1;
//	for (int i = 2; i < size; i++)
//	{
//		if (a[i] != 1)
//		{
//			for (int j = 2; i * j <= size; j++)
//				a[i * j] = 1;
//		}
//	}
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> n;
//		for (int j = n / 2; j > 0; j--)
//		{
//			if (a[j] != 1 && a[n - j] != 1)
//			{
//				cout << j << " " << n - j << "\n";
//				break;
//			}
//		}
//	}
//}