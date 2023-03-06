//#include <iostream>
//using namespace std;
//
//int main() {
//	int c, n, cnt;
//	int score[1000];
//	double avg;
//
//	cin >> c;
//	cout << fixed;
//	cout.precision(3);
//
//	for (int i = 0; i < c; i++) {
//		cin >> n;
//		avg = 0.0;
//
//		for (int j = 0; j < n; j++) {
//			cin >> score[j];
//			avg += score[j];
//		}
//		avg /= n;
//
//		cnt = 0;
//		for (int j = 0; j < n; j++) {
//			if (score[j] > avg)
//				cnt++;
//		}
//		cout << 100.0f * cnt / n << "%\n";
//	}
//
//	return 0;
//}