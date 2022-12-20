#include <iostream>
#include <string>
using namespace std;


int main()
{
	int n, m;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m >> s;
		for (char c : s)
		{
			for (int j = 0; j < m; j++)
				cout << c;
		}
		cout << "\n";
	}
}