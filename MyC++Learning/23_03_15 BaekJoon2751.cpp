//#include<iostream>
//#include <algorithm>
//using namespace std;
//
//int arr[1000000];
//
//void quickSort(int start, int end)
//{
//	int pivot = arr[start];
//	int left = start + 1;
//	int right = end;
//
//	if (start >= end)
//		return;
//	while (true) {
//		while (left <= right && arr[left] <= pivot)
//			left++;
//		while (left <= right && arr[right] >= pivot)
//			right--;
//		if (left > right)
//			break;
//		swap(arr[left], arr[right]);
//	}
//	swap(arr[start], arr[right]);
//	quickSort(start, right - 1);
//	quickSort(right + 1, end);
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie();
//	cout.tie();
//	int n, i;
//	cin >> n;
//
//	for (i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//
//	quickSort(0, n - 1);
//
//	for (i = 0; i < n; i++) {
//		cout << arr[i] << "\n";
//	}
//	return 0;
//}
//
