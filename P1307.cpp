#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,M;
    cin >> T >> M;

    vector<int> t(M+1);
    vector<int> v(M+1);

    for(int i=1;i<=M;i++)
    {
        cin >> t[i] >> v[i];
    }

    vector<int> dp(T+1,0);

    for(int i=1;i<=M;i++)
    {
        for(int j=T;j>=t[i];j--)
        {
            dp[j]=max(dp[j],dp[j-t[i]]+v[i]);
        }
    }

    cout << dp[T];

    return 0;
}