//#include <iostream>
//using namespace std;
//
//int func(int n)
//{
//	int cnt;
//	if (n < 100)
//		return n;
//	else
//	{
//		cnt = 99;
//	}
//	for (int i = 100; i <= n; i++)
//	{
//		int fir = i % 10;
//		int sec = (i / 10) % 10;
//		int thi = i / 100;
//
//		if ((thi - sec) == (sec - fir))
//			cnt++;
//	}
//	return cnt;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	cout << func(n);
//}