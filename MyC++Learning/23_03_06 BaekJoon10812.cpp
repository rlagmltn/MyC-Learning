//#include <iostream>
//#include <vector>
//using namespace std;
//vector<int> v;
//
//void Init(int m)
//{
//	for (int i = 1; i <= m; i++)
//	{
//		v.push_back(i);
//	}
//}
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	Init(m);
//	for (int i = 0; i < n; i++)
//	{
//		int f, b, m;
//		cin >> f >> b >> m;
//		if (f == m) continue;
//		for (int j = f--; j < m; j++)
//		{
//			v.insert(v.begin() + b, v[f]);
//			v.erase(v.begin() + f);
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		cout << v[i] << " ";
//	}
//}