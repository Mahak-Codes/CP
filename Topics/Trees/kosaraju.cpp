#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
void rev(int v,vector<int>&vis,vector<vector<int>>&adj,vector<vector<int>>&revadj){
    for(int i=0;i<v;i++){
		vis[i]=0;
	    for(auto x:adj[i]){
            revadj[x].push_back(i);
        }
    }
	
}
void dfs(int node,vector<vector<int>>&adj,vector<int>&vis,stack<int>&st){
	vis[node]=1;
	for(auto x:adj[node]){
		if(!vis[x]){
			dfs(x,adj,vis,st);
		}
	}
	st.push(node);

}
void dfs2(int node,vector<vector<int>>&revadj,vector<int>&vis){
	vis[node]=1;
	for(auto x:revadj[node]){
		if(!vis[x]){
			dfs2(x,revadj,vis);
		}
	}

}
int scc(int v, vector<vector<int>> &edges)
{
	// Write your code here.
	vector<vector<int>>adj(v);
	for(int i=0;i<edges.size();i++){
		int u=edges[i][0];
		int v=edges[i][1];
        adj[u].push_back(v);
	}

	stack<int>topo;
    vector<int> vis(v,0);

	for (int i = 0; i < v; i++) {
        if (!vis[i]) {
            dfs(i, adj, vis, topo);
        }
    }
	
	vector<vector<int>>revadj(v);
    rev(v,vis,adj,revadj);
	int cnt=0;
    while(!topo.empty()){
		int node=topo.top();
		topo.pop();
		if(!vis[node]){
			cnt++;
			dfs2(node,revadj,vis);
		}
	}
	return cnt;
}
int32_t main(){
    int v;
    cin>>v;
    vector<vector<int>> edges(v,vector<int>(2,0));
    for(int i=0;i<v;i++)
    {
        cin>>edges[i][0]>>edges[i][1];
    }
    int cnt=scc(v,edges);
    cout<<cnt<<endl;
}