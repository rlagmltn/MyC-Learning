//#include <iostream>
//#include <string>
//using namespace std;
//
//string Change(string s)
//{
//	char c = s[0];
//	s[0] = s[2];
//	s[2] = c;
//
//	return s;
//}
//int convert(string s)
//{
//	int sum = 0;
//	for (int j = 0, i = 100; i >= 1; i /= 10, j++)
//	{
//		int t = s[j] - '0';
//		t *= i;
//		sum += t;
//	}
//	return sum;
//}
//int main()
//{
//	string s1, s2;
//	int n1, n2;
//	cin >> s1 >> s2;
//	s1 = Change(s1);
//	s2 = Change(s2);
//	n1 = convert(s1);
//	n2 = convert(s2);
//
//	cout << max(n1, n2);
//}