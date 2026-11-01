#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    cin >> w;
    int n;
    cin >> n;
    vector<int> P(n);
    for (int i = 0; i < n; i++)
    {
        cin >> P[i];
    }
    sort(P.begin(), P.end());

    int l = 0;
    int r = n - 1;
    int ans = 0;
    while (l <= r)
    {
        if (P[l] + P[r] <= w)
        {
            ans += 1;
            l++;
            r--;
        }
        else
        {
            ans += 1;
            r--;
        }
    }
    cout << ans << '\n';
    return 0;
}
