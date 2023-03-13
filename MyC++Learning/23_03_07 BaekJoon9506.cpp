//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	while (true)
//	{
//		int n, sum = 0;
//		vector<int> v;
//		cin >> n;
//		if (n == -1) return 0;
//		for (int i = 1; i < n; i++)
//		{
//			if (n % i == 0)
//			{
//				v.push_back(i);
//				sum += i;
//			}
//		}
//		if (sum == n)
//		{
//			cout << n << " = ";
//			for (int i = 0; i < v.size(); i++)
//			{
//				cout << v[i] << " ";
//				if (i != v.size() - 1) cout << "+ ";
//			}
//		}
//		else
//		{
//			cout << n << " is NOT perfect.";
//		}
//		cout << "\n";
//	}
//}