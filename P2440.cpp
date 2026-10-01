#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    vector<long long> L(n);
    long long maxLength = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> L[i];
        if (L[i] > maxLength)
        {
            maxLength = L[i];
        }
    }

    long long l = 1;
    long long r = maxLength;
    long long ans = 0;
    while (l <= r)
    {
        long long mid = l + (r - l) / 2;
        long long count = 0;
        for (int i = 0; i < n; i++)
        {
            count += L[i] / mid;
        }

        if (count >= k)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans << '\n';
    return 0;
}
