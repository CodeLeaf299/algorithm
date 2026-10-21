#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r;
    cin >> r;
    vector<vector<int>> a(r, vector<int>(r, 0));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cin >> a[i][j];
        }
    }

    vector<vector<int>> dp(r, vector<int>(r, 0));
    dp[0][0] = a[0][0];
    for (int i = 1; i < r; i++)
    {
        dp[i][0] = dp[i - 1][0] + a[i][0];
        dp[i][i] = dp[i - 1][i - 1] + a[i][i];

        for (int j = 1; j < i; j++)
        {
            dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + a[i][j];
        }
    }

    int ans = dp[r - 1][0];
    for (int i = 0; i < r; i++)
    {
        if (ans <= dp[r - 1][i])
        {
            ans = dp[r - 1][i];
        }
    }
    cout << ans << '\n';
    return 0;
}
