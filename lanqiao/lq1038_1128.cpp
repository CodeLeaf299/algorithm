// 蓝桥云课 1038 含 2 天数（11/28 不看参考从空白重写，AC）
#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long cnt = 0;
  int day[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
  for (int y = 1900; y <= 9999; y++)
  {
    for (int m = 1; m <= 12; m++)
    {
      int dm = day[m];
      if (m == 2 && ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0))
      {
        dm++;                      // 闰年 2 月多一天
      }
      for (int d = 1; d <= dm; d++)
      {
        int num = 10000 * y + 100 * m + d;
        while (num)
        {
          if (num % 10 == 2)
          {
            cnt++;
            break;                 // 一天只算一次
          }
          num /= 10;               // 不管是不是 2，都去掉最后一位
        }
      }
    }
  }
  cout << cnt;                     // 1994240
  return 0;
}
