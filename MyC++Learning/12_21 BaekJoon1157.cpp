#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<char> v;
	string s;
	cin >> s;
	while (s.size() > 2)
	{
		v.push_back(s[0]);
		s.erase(s.begin());
		for (int i = 1; i < s.size(); i++)
		{
			for (auto a : v)
			{

			}
		}
	}
	if (s.size())
	{
		cout << s;
	}
	else
	{
		cout << "?";
	}
}
