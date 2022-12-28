//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s;
//	cin >> s;
//    int cnt = s.size();
//    for (int i = 0; i < s.size(); i++) 
//    {
//        if (s[i] == '=') 
//        {
//            if (s[i - 1] == 'c' || s[i - 1] == 's') cnt--;
//            if (s[i - 1] == 'z') 
//            {
//                cnt--;
//                if (s[i - 2] == 'd') cnt--;
//            }
//        }
//        if (s[i] == '-' && (s[i - 1] == 'c'|| s[i - 1] == 'd')) cnt--;
//        if (s[i] == 'j' && (s[i - 1] == 'l' || s[i - 1] == 'n')) cnt--;
//    }
//	cout << cnt;
//}
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s;
//	int cnt = 0;
//	cin >> s;
//	for (int i = 0; i < s.size(); cnt++)
//	{
//		if ((i + 1 < s.size()) && ((s[i + 1] == 'j' && (s[i] == 'l' || s[i] == 'n')) || s[i + 1] == '-' || s[i + 1] == '='))
//			i += 2;
//		else if ((i + 2 < s.size()) && s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=')
//			i += 3;
//		else
//			i++;
//	}
//	cout << cnt;
//}