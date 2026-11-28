// 蓝桥云课 2107 修剪灌木（2022 省赛 B 组）
// 第 i 棵的最大高度 = 往左、往右各走一个来回，取长的那段
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;
  for (int i = 1; i <= N; i++)
  {
    cout << max(2 * (N - i), 2 * (i - 1)) << "\n";
  }
  return 0;
}
