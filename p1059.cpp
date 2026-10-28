#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    cout << a.size() << '\n';
    for (int i = 0; i < static_cast<int>(a.size()); i++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
    return 0;
}
