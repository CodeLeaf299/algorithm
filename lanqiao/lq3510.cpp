// 蓝桥云课 3510 冶炼金属（2023 省赛 B 组）：每条记录给出 V 的范围，取交集
// 最大 V = min(a/b)，最小 V = max(a/(b+1)+1)
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;
  long long v_max = 1e18, v_min = 0;
  while (N)
  {
    long long a, b;
    cin >> a >> b;
    v_max = min(v_max, a / b);
    v_min = max(v_min, a / (b + 1) + 1);
    N--;
  }
  cout << v_min << " " << v_max;
  return 0;
}
