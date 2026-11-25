// 蓝桥云课 1562 完全日期
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int cnt = 0;
  int day[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
  for (int y = 2001; y <= 2021; y++)
  {
    for (int m = 1; m <= 12; m++)
    {
      for (int d = 1; d <= day[m] + (m == 2 && (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)); d++)
      {
        int num = 10000 * y + 100 * m + d;
        int sum = 0;
        while (num)
        {
          sum += num % 10;
          num /= 10;
        }
        int r = sqrt(sum);
        if (r * r == sum)
        {
          cnt += 1;
        }
      }
    }
  }
  cout << cnt << "\n";
  return 0;
}
