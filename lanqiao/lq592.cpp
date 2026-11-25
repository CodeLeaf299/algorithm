// 蓝桥云课 592 门牌制作
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int cnt = 0;
  for (int i = 1; i <= 2020; i++)
  {
    int x = i;
    while (x)
    {
      if (x % 10 == 2)
      {
        cnt++;
      }
      x /= 10;
    }
  }
  cout << cnt;
  return 0;
}
