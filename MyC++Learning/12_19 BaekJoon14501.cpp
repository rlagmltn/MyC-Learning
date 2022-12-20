//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int n, m;
//	vector<int> t;
//	vector<int> p;
//	int memo[16] = { 0 };
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int ins1, ins2;
//		cin >> ins1 >> ins2;
//		t.push_back(ins1);
//		p.push_back(ins2);
//	}
//	for (int i = n - 1; i >= 0; i--)
//	{
//		int time = t[i] + i;
//		if (time <= 0)
//		{
//			memo[i] = max(p[i] + memo[time], m);
//			m = memo[i];
//		}
//		else
//			memo[i] = m;
//	}
//	cout << m;
//}