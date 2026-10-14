#include <bits/stdc++.h>
using namespace std;

void dfs(int x, int y, vector<string>& a, int n, int m)
{
    if (x < 0 || x >= n || y < 0 || y >= m)
        return;

    if (a[x][y] != 'W')
        return;

    a[x][y] = '.';
    dfs(x - 1, y, a, n, m);
    dfs(x + 1, y, a, n, m);
    dfs(x - 1, y - 1, a, n, m);
    dfs(x, y - 1, a, n, m);
    dfs(x, y + 1, a, n, m);
    dfs(x - 1, y + 1, a, n, m);
    dfs(x + 1, y + 1, a, n, m);
    dfs(x + 1, y - 1, a, n, m);
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 'W')
            {
                ans++;
                dfs(i, j, a, n, m);
            }
        }
    }

    cout << ans << '\n';
    return 0;
}
