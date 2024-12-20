#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

void dfs(int node, int parent, int cats,int m, vector<vector<int>>& adj, vector<int> &v,int &ans)
{
    if (v[node] == 1)
    {
        cats++;
    }
    else
    {
        cats = 0;
    }
    if (cats > m){
        return;
    }
    for(auto x:adj[node]){
        if(x!=parent){
           dfs(x,node,cats,m,adj,v,ans);
        }
    }  
    ans += (adj[node].size() == 1 && adj[node][0] == parent);
};

int32_t main()
{
    mahak_codes 
    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<vector<int>> adj(n+1);
    for (int i = 1; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int ans=0;
    dfs(1, 1, 0,m,adj,v,ans);

    cout << ans << "\n";
}
