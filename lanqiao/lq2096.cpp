// 蓝桥云课 2096 顺子日期
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int cnt = 0;
  int day[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
  int y = 2022;
  for (int m = 1; m <= 12; m++)
  {
    for (int d = 1; d <= day[m] + (m == 2 && (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)); d++)
    {
      vector<int> a;
      int num = 10000 * y + 100 * m + d;
      while (num)
      {
        int n = num % 10;
        a.push_back(n);
        num /= 10;
      }
      reverse(a.begin(), a.end());
      for (int i = 0; i <= 5; i++)
      {
        if (a[i + 1] == a[i] + 1 && a[i + 2] == a[i + 1] + 1)
        {
          cnt += 1;
          break;
        }
      }
    }
  }
  cout << cnt;
  return 0;
}
