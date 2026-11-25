// 蓝桥云课 1038 含 2 天数
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int cnt = 0;
  int day[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
  int num;
  for (int y = 1900; y <= 9999; y++)
  {
    for (int m = 1; m <= 12; m++)
    {
      for (int d = 1; d <= day[m] + (m == 2 && (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)); d++)
      {
        num = 10000 * y + 100 * m + d;
        while (num)
        {
          if (num % 10 == 2)
          {
            cnt += 1;
            break;
          }
          else num /= 10;
        }
      }
    }
  }
  cout << cnt;
  return 0;
}
