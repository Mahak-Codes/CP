#include <bits/stdc++.h>
using namespace std;


#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
class Disjoint{
   int n;
   vector<int>par;
   vector<int>sz;
   
   public:
    Disjoint(int size){
        n=size;
        par.resize(size+1);
        sz.resize(size+1);
        for(int i=1;i<=n;i++){
            par[i]=i;
            sz[i]=1;
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
    }

};
int main() {
    mahak_codes
    int n,m;
    cin>>n>>m;
    Disjoint graph(n);
    vector<string>ans;
    while(m--){
        string op;
        int u,v;
        cin>>op>>u>>v;
        if(op=="get"){
            int p1= graph.find(u);
            int p2= graph.find(v);
            if(p1==p2){
                ans.push_back("YES");
            }
            else{
                ans.push_back("NO");
            }
            
        }
        else{
            graph.unions(u,v);
        }
    }
    for(auto x:ans){
        cout<<x<<endl;
    }

    return 0;
}