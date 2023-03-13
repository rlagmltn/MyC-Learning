//#include <iostream>
//using namespace std;
//
//int IsPrime(int num)
//{
//	for (int i = 2; i <= num / 2; i++)
//	{
//		if (num % i == 0) return 0;
//	}
//	return num;
//}
//int main()
//{
//	int min = 10001, front, end, sum = 0;
//	cin >> front >> end;
//	for (int i = front; i <= end; i++)
//	{
//		if (i < 2)
//			continue;
//		sum += IsPrime(i);
//		if (sum > 0 && min > i)
//		{
//			min = i;
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