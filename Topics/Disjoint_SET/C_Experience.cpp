#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
class Disjoint{
    vector<int>par,sz,val,pts;
    vector<vector<int>>child;
    public:
    Disjoint(int size){
        int n=size;
        par.resize(n+1);
        val.resize(n+1,0);
        pts.resize(n+1,0);
        child.resize(n+1);
        for(int i=1;i<=n;i++){
            par[i]=i;
            child[i].push_back(i); 
        }
    }
    int find(int u){
        if(par[u]==u){
           return u;
        }
        return par[u]=find(par[u]);
    }
    void  join(int x,int y){
        int p1=find(x);
        int p2=find(y);
        if(p1==p2){
            return;
        }
        if(child[p1].size()<child[p2].size()){
            swap(p1,p2);
        }
        for(auto x:child[p2]){
            pts[x]+=val[p2]-val[p1];
        }
        val[p2]=0;
        child[p1].insert(child[p1].end(),child[p2].begin(),child[p2].end());
        child[p2].clear(); 
        par[p2]=p1;

    }
    void add(int u,int vl){
        int p1=find(u);
        val[p1]+=vl;
    }
    int get(int u){
        int p1=find(u);
        if(p1!=u){
           return val[p1]+pts[u];
        }
        return val[p1];
    }

};
int32_t main() {
    mahak_codes
    int n,m;
    cin>>n>>m;
    Disjoint graph(n);
    while(m--){
        string type;
        cin>>type;
        if(type=="join"){
            int u, v;
            cin>>u>>v;
            graph.join(u,v);
        }
        else if(type=="add"){
            int u,vl;
            cin>>u>>vl;
            graph.add(u,vl);
        }
        else{
            int x;
            cin>>x;
            cout<<graph.get(x)<<endl;
        }
    }

    return 0;
}