//#include <string>
//#include <vector>
//
//using namespace std;
//int dx[9] = { -1, 0, 1, -1, 0, 1, -1, 0, 1 };
//int dy[9] = { 1, 1, 1, 0, 0, 0, -1, -1, -1 };
//bool check[101][101] = { false };
//
//int solution(vector<vector<int>> board)
//{
//    int size = board.size();
//    int answer = size * size;
//    for (int i = 0; i < answer; i++)
//    {
//        int x = i / size;
//        int y = i % size;
//        if (board[x][y] == 1)
//        {
//            for (int j = 0; j < 9; j++)
//            {
//                int nx = dx[j] + x;
//                int ny = dy[j] + y;
//                if (nx < 0 || nx >= size || ny < 0 || ny >= size) continue;
//                check[nx][ny] = true;
//            }
//        }
//    }
//    for (int i = 0; i < size; i++)
//    {
//        for (int j = 0; j < size; j++)
//        {
//            if (check[i][j])
//                answer--;
//        }
//    }
//    return answer;
//}