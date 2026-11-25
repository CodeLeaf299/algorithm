// 蓝桥云课 541 合法日期
#include <bits/stdc++.h>
using namespace std;

int days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

void yn(int m, int d)
{
  if (m >= 1 && m <= 12 && d >= 1 && d <= days[m])
    cout << "yes";
  else
    cout << "no";
}

int main()
{
  int m, d;
  cin >> m >> d;
  yn(m, d);
  return 0;
}
