#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, hx, hy;
    cin >> n >> m >> hx >> hy;

    vector<vector<int>> ban(n + 1, vector<int>(m + 1, 0));
    int dx[9] = {0, -2, -2, -1, -1, 1, 1, 2, 2};
    int dy[9] = {0, -1, 1, -2, 2, -2, 2, -1, 1};

    for (int k = 0; k < 9; k++)
    {
        int nx = hx + dx[k];
        int ny = hy + dy[k];
        if (nx >= 0 && nx <= n && ny >= 0 && ny <= m)
        {
            ban[nx][ny] = -1;
        }
    }

    vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, 0));
    dp[0][0] = 1;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (ban[i][j] == -1)
            {
                dp[i][j] = 0;
                continue;
            }
            if (i > 0)
            {
                dp[i][j] += dp[i - 1][j];
            }
            if (j > 0)
            {
                dp[i][j] += dp[i][j - 1];
            }
        }
    }

    cout << dp[n][m] << '\n';
    return 0;
}
