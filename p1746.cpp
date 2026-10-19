#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;
    sx--;
    sy--;
    tx--;
    ty--;

    vector<int> row(n, -1);
    vector<vector<int>> dist(n, row);
    dist[sx][sy] = 0;

    queue<pair<int, int>> q;
    q.push({sx, sy});
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (x == tx && y == ty)
        {
            cout << dist[x][y] << '\n';
            return 0;
        }

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= n)
            {
                continue;
            }
            if (a[nx][ny] == '1' || dist[nx][ny] != -1)
            {
                continue;
            }
            dist[nx][ny] = dist[x][y] + 1;
            q.push({nx, ny});
        }
    }
    return 0;
}
