// 蓝桥云课 99 分巧克力（2017 省赛）：二分答案，check(x) 统计边长 x 时能切出的块数
#include <bits/stdc++.h>
using namespace std;

int n, K;
vector<int> h, w;

bool check(int x)
{
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (long long)(h[i] / x) * (w[i] / x);
    }
    return sum >= K;
}

int main()
{
    cin >> n >> K;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        h.push_back(a);
        w.push_back(b);
    }

    int l = 1, r = 100000, ans = 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (check(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans;
    return 0;
}
