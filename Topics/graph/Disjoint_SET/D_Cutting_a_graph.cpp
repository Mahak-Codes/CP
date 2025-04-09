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
    int n,m,k;
    cin>>n>>m>>k;
    Disjoint graph(n);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
    }
    vector<string>ans;
    vector<pair<string,pair<int,int>>>vi;
    while(k--){
        string op;
        int u,v;
        cin>>op>>u>>v;
        vi.push_back({op,{u,v}}); 
    }
    for(int i=vi.size()-1;i>=0;i--){
        string op= vi[i].first;
        int u,v;
        u=vi[i].second.first;
        v=vi[i].second.second;
        if(op=="ask"){
            int p1= graph.find(u);
            int p2= graph.find(v);
            if(p1==p2){
                ans.push_back("YES");
            }
            else{
                ans.push_back("NO");
            }
            
        }
        else if(op=="cut"){
            graph.unions(u,v);
        }
        
       
    }
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<endl;
    }

    return 0;
}