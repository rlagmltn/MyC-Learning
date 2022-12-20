#include <iostream>
#include <vector>
using namespace std;

int n;
long long memo[100][100];
long long map[100][100];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> map[i][j];
        }
    }

    memo[0][0] = 1;
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            if (map[y][x] == 0) continue;
            if (memo[y][x] != 0) {
                int nextY = y + map[y][x];
                int nextX = x + map[y][x];

                if (nextY < n) {
                    memo[nextY][x] += memo[y][x];
                }
                if (nextX < n) {
                    memo[y][nextX] += memo[y][x];
                }
            }
        }
    }

    cout << memo[n - 1][n - 1];
}