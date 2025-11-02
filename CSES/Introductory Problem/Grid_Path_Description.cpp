#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

bool check(int i, int j,vector<vector<int>>&vis)
{
    return i >= 0 && j >= 0 && i < 7 && j < 7 && vis[i][j]==0;
}
bool block(int i,int j,vector<vector<int>>&vis){
    if(!check(i-1,j,vis) && !check(i+1,j,vis) && check(i,j+1,vis) && check(i,j-1,vis)){
        return true;
    }
    if(check(i-1,j,vis) && check(i+1,j,vis) && !check(i,j+1,vis) && !check(i,j-1,vis)){
        return true;
    }
    return false;
  
}
int ans = 0;
void dfs(int i, int j, int step, string &s,vector<vector<int>>&vis)
{
    if (step == 48 || (i == 6 && j == 0))
    {
        ans += (step == 48 && i == 6 && j == 0);
        return;
    }
    if(block(i,j,vis)){
        return ;
    }
    vis[i][j]=1;
  
    if (check(i, j - 1,vis) && (s[step] == 'L' ||s[step]=='?'))
    {
        dfs(i, j - 1, step + 1, s,vis);
    }
  
    if (check(i, j + 1,vis) && (s[step] == 'R'||s[step]=='?'))
    {
        dfs(i, j + 1, step + 1, s,vis);
    }

    if (check(i - 1, j,vis) && (s[step] == 'U'||s[step]=='?'))
    {
        dfs(i - 1, j, step + 1, s,vis);
    }
  
    if (check(i + 1, j,vis) && (s[step] == 'D' ||s[step]=='?'))
    {
        dfs(i + 1, j, step + 1, s,vis);
    }
    vis[i][j]=0;
}
int32_t main()
{
    mahak_codes
    string s;
    cin >> s;
    vector<vector<int>>vis(7,vector<int>(7,0));
    dfs(0, 0, 0, s,vis);
    cout << ans << endl;
    return 0;
}