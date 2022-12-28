//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//
//int main()
//{
//	string s;
//	cin >> s;
//	map<char, int> m;
//	int max = 0;
//	char ans = '?';
//	for (int i = 0; i < s.size(); i++)
//	{
//		char t = s[i];
//		if (t >= 'a') t -= (' ');
//		m[t]++;
//	}
//	for (auto p : m)
//	{
//		if (p.second == max)
//		{
//			max = p.second;
//			ans = '?';
//		}
//		else if (p.second > max)
//		{
//			max = p.second;
//			ans = p.first;
//		}
//	}
//	cout << ans;
//}
