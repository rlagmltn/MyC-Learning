//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	vector<pair<int, int>> v;
//	int n, hp = 100, ex = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int x, y;
//		cin >> x >> y;
//		v.push_back({ x, y });
//	}
//	sort(v.begin(), v.end(), greater<pair<int, int>>());
//	for (auto e : v)
//	{
//		while (hp - e.first > 0)
//		{
//			hp -= e.first;
//			ex += e.second;
//		}
//	}
//	cout << ex;
//}