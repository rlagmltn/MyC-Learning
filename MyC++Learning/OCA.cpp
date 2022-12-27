//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<pair<int, int>> xy;
//int n, m, cnt;
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { -1, 1, 0, 0 };
//bool visited[101][101] = { false };
//
//void solve(int x, int y, int c)
//{
//	visited[x][y] = true;
//	if (c == n) return;
//	for (int i = 0; i < 4; i++)
//	{
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//
//		if (!(nx <= 0 || nx > m || ny <= 0 || nx > m))
//		{
//			visited[nx][ny] = true;
//			solve(nx, ny, c + 1);
//		}
//	}
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < 2; i++)
//	{
//		int x, y;
//		cin >> x >> y;
//		xy.push_back({ x, y });
//	}
//	//n == 1 ? n : n--;
//	n--;
//	for (auto g : xy)
//	{
//		solve(g.first, g.second, 0);
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cout << visited[i][j] << " ";
//			if (visited[i][j])
//				cnt++;
//		}
//		cout << "\n";
//	}
//	cout << cnt;
//}