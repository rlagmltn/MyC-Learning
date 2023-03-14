#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int a[500001];

int main()
{
	long long int s = 0;
	map<int, int> m;
	int t;
	auto p = make_pair(0, 0);
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a[i];
		m[a[i]]++;
		s += a[i];
	}
	for (auto a : m)
	{
		if (a.second > p.second)
			p = a;
	}
	sort(a, a + t);
	if (p.second == 1)
		cout << s / t << "\n" << a[t / 2] << "\n" << m.at(1) << "\n" << a[t - 1] - a[0];
	else
		cout << s / t << "\n" << a[t / 2] << "\n" << p.first << "\n" << a[t - 1] - a[0];
}