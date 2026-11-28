// 蓝桥云课 20545 可分解的正整数（2025 省赛 B 组）
// 规律：任何 x >= 2 都能写成 -(x-1) + ... + x，只有 1 不行
#include <bits/stdc++.h>
using namespace std;

// 暴力版（能拿 x <= 100 的小数据）：枚举起点，往后一个个加
bool can(int x)
{
  for (int s = -x; s <= x; s++)
  {
    int sum = 0;
    for (int e = s; e <= x; e++)
    {
      sum += e;
      if (e - s + 1 >= 3 && sum == x) return true;   // 找到就结束整个函数
    }
  }
  return false;
}

int main()
{
  long long N, cnt = 0;
  cin >> N;
  for (long long i = 0; i < N; i++)
  {
    long long x;
    cin >> x;
    if (x != 1) cnt++;          // 满分版
    // if (can(x)) cnt++;       // 暴力版
  }
  cout << cnt;
  return 0;
}
