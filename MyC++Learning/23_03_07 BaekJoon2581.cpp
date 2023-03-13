//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int min = 101, small, big, sum = 0;
//	cin >> small >> big;
//	for (int i = small; i < big; i++)
//	{
//		int j;
//		for (j = 2; j <= small / 2; j++)
//		{
//			if (small % j) break;
//		}
//		if (j == small / 2)
//		{
//			sum += i;
//			if (min > i) min = i;
//		}
//	}
//	if (sum)
//	{
//		cout << sum << "\n" << min;
//	}
//	else
//	{
//		cout << -1;
//	}
//}