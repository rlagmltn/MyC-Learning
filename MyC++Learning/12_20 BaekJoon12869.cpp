#include <iostream>
#include<string.h>
using namespace std;

int n;
int scv[3];
int memo[61][61][61];
int damage[6][3]{
	9,3,1,
	9, 1,3,
	3, 1, 9,
	3, 9, 1,
	1, 3,9,
	1, 9, 3
};

int solve(int a, int b, int c)
{
	if (a == 0 && b == 0 && c == 0) {
		return 0;
	}
	if (a < 0) {
		return solve(0, b, c);
	}
	if (b < 0) {
		return solve(a, 0, c);
	}
	if (c < 0) {
		return solve(a, b, 0);
	}
	if (memo[a][b][c] != -1) {
		return memo[a][b][c];
	}
	memo[a][b][c] = 999;

	for (int i = 0; i < 6; i++)
	{
		memo[a][b][c] = min(memo[a][b][c], solve(a - damage[i][0], b - damage[i][1], c - damage[i][2]) + 1);
	}

	return memo[a][b][c];
}

int main() {
	memset(memo, -1, sizeof(memo));

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> scv[i];
	}

	cout << solve(scv[0], scv[1], scv[2]);
}