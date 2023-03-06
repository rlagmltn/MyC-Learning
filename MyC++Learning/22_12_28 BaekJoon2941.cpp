//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//    string s;
//    cin >> s;
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
//        if (s[i] == '-' && (s[i - 1] == 'c' || s[i - 1] == 'd')) cnt--;
//        if (s[i] == 'j' && (s[i - 1] == 'l' || s[i - 1] == 'n')) cnt--;
//    }
//    cout << cnt;
//
//}