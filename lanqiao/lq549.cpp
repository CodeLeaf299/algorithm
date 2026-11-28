// 蓝桥云课 549 扫雷：8 方向 + 边界检查
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, m;
  cin >> n >> m;
  vector<vector<int>> val(n, vector<int>(m));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> val[i][j];

  int dx[8] = {-1,-1,-1, 0, 0, 1, 1, 1};
  int dy[8] = {-1, 0, 1,-1, 1,-1, 0, 1};

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (val[i][j] == 1)
      {
        cout << 9 << " ";
        continue;
      }
      int cnt = 0;
      for (int k = 0; k < 8; k++)
      {
        int x = i + dx[k], y = j + dy[k];
        if (x < 0 || x >= n || y < 0 || y >= m) continue;
        if (val[x][y] == 1) cnt++;
      }
      cout << cnt << " ";
    }
    cout << "\n";
  }
  return 0;
}
