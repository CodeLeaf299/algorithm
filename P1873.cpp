#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin >> n >>m;

    long long maxHeight=0;
    vector<long long>a(n);
    for(int i =0;i<n;i++)
    {
        cin >>a[i];
        if(a[i]>maxHeight)
        {
            maxHeight = a[i];
        }
    }

    long long l =0;
    long long r =maxHeight;
    long long ans = 0;
    while (l <=r)
    {
        long long mid = l+ (r-l) /2;
        long long wood =0;
        for(int i =0;i<n;i++)
        {
            if (a[i] >mid)
            {
                wood+=a[i]-mid;
            }
        }
        if(wood >= m)
        {
            ans = mid;
            l = mid +1;
        }
        else
        {
            r = mid -1;
        }

    }
    cout << ans <<"\n";
}