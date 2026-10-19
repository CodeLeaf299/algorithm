#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    x--;
    y--;
    vector<int> row(m, -1);
    vector<vector<int>> dist(n, row);
    dist[x][y] = 0;
    queue<pair<int, int>> q;
    q.push({x, y});

    int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
    int dy[8] = {-1, 1, -2, 2, 2, -2, -1, 1};
    while (!q.empty())
    {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
            {
                continue;
            }
            if (dist[nx][ny] != -1)
            {
                continue;
            }
            dist[nx][ny] = dist[cx][cy] + 1;
            q.push({nx, ny});
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << dist[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
