//#include <iostream>
//using namespace std;
//
//long long int memo[42] = { };
//
//long long int fibo(int n)
//{
//
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	if (memo[n] != 0)
//		return memo[n];
//	return memo[n] = fibo(n - 1) + fibo(n - 2);
//}
//
//int main()
//{
//	long long int n;
//	cin >> n;
//	if (n == 0)
//	{
//		cout << 0;
//		return 0;
//	}
//	else if (n == 1)
//	{
//		cout << 1;
//		return 0;
//	}
//	cout << fibo(n);
//}