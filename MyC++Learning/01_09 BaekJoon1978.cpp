//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, cnt = 0;
//	cin >> n;
//	while (n--)
//	{
//		int t;
//		cin >> t;
//		if (t <= 1)
//		{
//			continue;
//		}
//		else if (t <= 3)
//		{
//			cnt++;
//		}
//		else
//		{
//			for (int i = 2; i <= t / 2; i++)
//			{
//				if (t % i == 0)
//				{
//					cnt--;
//					break;
//				}
//			}
//			cnt++;
//		}
//	}
//	cout << cnt;
//}