//#include<iostream>
//#include<algorithm>
//#include<cmath>
//#include<vector>
//using namespace std;
//
//int arr[500001];
//int cnt[8001];
//
//int main()
//{
//	int n, a, b, c, d;
//	int sum = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//		sum += arr[i];
//		cnt[arr[i] + 4000]++;
//	}
//	sort(arr, arr + n);
//
//	int flag;
//	int max = 0;
//	for (int i = 0; i < 8001; i++)
//	{
//		if (cnt[i] > max)
//		{
//			max = cnt[i];
//			flag = i;
//		}
//	}
//	for (int i = flag + 1; i < 8001; i++)
//	{
//		if (cnt[i] == max)
//		{
//			flag = i;
//			break;
//		}
//	}
//	a = round(double(sum) / n);
//	b = arr[(n - 1) / 2];
//	c = flag - 4000;
//	d = arr[n - 1] - arr[0];
//
//	cout << a << "\n" << b << "\n" << c << "\n" << d << "\n";
//}