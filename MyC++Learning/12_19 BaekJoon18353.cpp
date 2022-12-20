//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int n, m = 0;
//	vector<int> v;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int p;
//		cin >> p;
//		v.push_back(p);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		v[i] = 1;
//	}
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (v[j] > v[i])
//			{
//				v[i] = max(v[i], v[j - 1] + 1);
//			}
//		}
//	}
//	int k = 0;
//	for (int i = 0; i < n; i++)
//	{
//
//	}
//	cout << m;
//
//}