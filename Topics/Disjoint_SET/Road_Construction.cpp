#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
int find(int i,vector<int>&par,vector<int>&sz){
    if(par[i]==i){
        return i;
    }
    return par[i]=find(par[i],par,sz);
}
bool unions(int n1,int n2,vector<int>&par,vector<int>&sz){
    int p1=find(n1,par,sz);
    int p2=find(n2,par,sz);
    if(p1==p2){
        return false;
    }
    if (sz[p1] < sz[p2]){
        swap(p1,p2);
    }
    par[p2]=p1; 
    sz[p1]+=sz[p2];
    
    return true;
}
int32_t main() {
    mahak_codes
    int n,m;
    cin>>n>>m;
    vector<int>par(n+1);
    vector<int>sz(n+1,1);
    for(int i=1;i<=n;i++){
        par[i]=i;
    }
    int comp=n;
    int maxi=1;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        if(unions(a,b,par,sz)){
            comp--;
            maxi=max(maxi,sz[find(a,par,sz)]);
        }
        cout<<comp<<" "<<maxi<<endl;
    }
    return 0;
}