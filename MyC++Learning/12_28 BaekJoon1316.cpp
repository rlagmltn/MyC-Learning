//#include <iostream>
//using namespace std;
//
//int main() {
//	int n;
//	string word;
//	int cnt = 0;
//
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> word;
//
//		bool alphabet[26] = { false, };
//		alphabet[word[0] - 'a'] = true;
//
//		for (int i = 1; i < word.size(); i++)
//		{
//
//			if (word[i] == word[i - 1]) 
//			{
//				continue;
//			}
//
//			else if (word[i] != word[i - 1]
//				&& alphabet[word[i] - 'a'] == true)
//			{
//				cnt++;
//				break;
//			}
//			else
//			{
//				alphabet[word[i] - 'a'] = true;
//			}
//		}
//	}
//	cout << n - cnt;
//}