// 蓝桥云课 20538 产值调整（2025 省赛 B 组）：读一组→算一组→输出一组，相等就提前停
#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long T;
  cin >> T;
  while (T--)
  {
    long long A, B, C, K;
    cin >> A >> B >> C >> K;
    while (K--)
    {
      long long A1 = (B + C) / 2;
      long long B1 = (A + C) / 2;
      long long C1 = (A + B) / 2;
      A = A1; B = B1; C = C1;
      if (A == B && B == C) break;
    }
    cout << A << " " << B << " " << C << "\n";
  }
  return 0;
}
