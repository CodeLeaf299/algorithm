// 洛谷 P2670 扫雷游戏（11/28 从空白重写，AC）
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n>>m;
    vector<vector<char>>val(n,vector<char>(m));
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            cin >> val[i][j];
        }
    }
    int dx[8]={-1,-1,-1,0,0,1,1,1};
    int dy[8]={-1,0,1,-1,1,-1,0,1};
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            if(val[i][j]=='*')
            {
                continue;
            }
            int cnt =0;
            for(int k=0;k<8;k++)
            {
                int nx = i+dx[k];
                int ny = j+dy[k];
                if(nx<0||nx>=n||ny<0||ny>=m)
                {
                    continue;
                }
                else if(val[nx][ny] =='*')
                {
                    cnt++;
                    continue;
                }
            }
            val[i][j]='0'+cnt;
        }
    }
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            cout<< val[i][j];
        }
        cout<<"\n";
    }
}
