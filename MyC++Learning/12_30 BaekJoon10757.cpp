//#include <iostream>
//#include <string>
//using namespace std;
//
//string s;
//
//int main()
//{
//	string s1, s2;
//	cin >> s1 >> s2;
//	int size1 = s1.size(), size2 = s2.size(); // 두 문자열의 크기
//	int maxsize = max(size1, size2), minsize = min(size1, size2), p = 0;
//	if (maxsize == s1.size())
//	{
//		for (int i = minsize; i < maxsize; i++)
//			s2 = '0' + s2;
//	}
//	else
//	{
//		for (int i = minsize; i < maxsize; i++)
//			s1 = '0' + s1;
//	}
//
//	for (int i = maxsize - 1; i >= 0; i--)
//	{
//		int n = s1[i] - '0' + s2[i] - '0' + p;
//		if (n >= 10)
//		{
//			n -= 10;
//			p = 1;
//		}
//		else p = 0;
//		s = (char)(n + '0') + s;
//	}
//	if (p) s = '1' + s;
//	cout << s;
//}