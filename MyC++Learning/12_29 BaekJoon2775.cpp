//#include <iostream>
//using namespace std;
//
//int solve(int k, int n)
//{
//	if (!n) return 0;
//	if (!k) return n;
//	return solve(k, n - 1) + solve(k - 1, n);
//}
//int main()
//{
//	int t;
//	cin >> t;
//	for (int i = 0; i < t; i++)
//	{
//		int n, k;
//		cin >> k >> n;
//		cout << solve(k, n) << "\n";
//	}
//}