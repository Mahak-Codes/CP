#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

void dfs(int node,vector<int>&vis,int in,vector<vector<int>>&adj,vector<pair<int,int>>&ans){
    vis[node]=1;
    for(auto x:adj[node]){
        if(!vis[x]){
            if(in){
                ans.push_back({x,node});
            }
            else{
                ans.push_back({node,x});
            }
            dfs(x,vis,!in,adj,ans);
        }
    }
}
int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>>adj(n+1);
        for(int i=0;i<n-1;i++){
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>vis(n+1,0);
        int f=0;
        int d2_node=-1;
        for(int i=1;i<=n;i++){
            if(adj[i].size()==2){
                d2_node=i;
                f=1;
                break;
            }
        }
        
        if(!f){
            cout<<"NO"<<endl;
        }
        else{
            vector<pair<int,int>>ans;
            cout<<"YES"<<endl;
            vis[d2_node]=1;
            cout<<d2_node<<" "<<adj[d2_node][0]<<endl;
            cout<<adj[d2_node][1]<<" "<<d2_node<<endl;
            dfs(adj[d2_node][0],vis,1,adj,ans);
            dfs(adj[d2_node][1],vis,0,adj,ans);
            for(auto x:ans){
                cout<<x.first<<" "<<x.second<<endl;
            }
        }
    }

    return 0;
}
