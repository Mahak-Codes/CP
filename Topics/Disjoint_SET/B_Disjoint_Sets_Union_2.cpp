#include <bits/stdc++.h>
using namespace std;


#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
class Disjoint{
   int n;
   vector<int>par;
   vector<int>sz;
   vector<int>mini;
   vector<int>maxi;
   public:
    Disjoint(int size){
        n=size;
        par.resize(size+1);
        sz.resize(size+1,1);
        mini.resize(size+1);
        maxi.resize(size+1);
        for(int i=1;i<=n;i++){
            par[i]=i;
            mini[i]=i;
            maxi[i]=i;
        }
    }

    int find(int x){
        if(x==par[x]){
            return x;
        }
        return par[x]=find(par[x]);
    }
    void unions(int n1,int n2){
        int p1=find(n1);
        int p2=find(n2);
        if(p1==p2){
            return ;
        }
        if(sz[p1]<sz[p2]){
            swap(p1,p2);
        }
        sz[p1]+=sz[p2];
        par[p2]=p1;
        mini[p1]=min(mini[p1],mini[p2]);
        maxi[p1]=max(maxi[p1],maxi[p2]);
    }
    void get(int node){
        int p=find(node);
        cout<<mini[p]<<" "<<maxi[p]<<" "<<sz[p]<<endl;
    }

};
int main() {
    mahak_codes
    int n,m;
    cin>>n>>m;
    Disjoint graph(n);
  
    while(m--){
        string op;
        cin>>op;
        if(op=="get"){
            int u;
            cin>>u;
            graph.get(u);
            
        }
        else{
            int u,v;
            cin>>u>>v;
            graph.unions(u,v);
        }
    }
    

    return 0;
}