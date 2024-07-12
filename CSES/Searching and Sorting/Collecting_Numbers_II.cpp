//TlE comes
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
int solve(map<int,int>&mp,int a,int b){
    int v1,v2;
    for(auto x:mp){
        if(x.second==a){
            v1=x.first;
        }
        if(x.second==b){
            v2=x.first;
        }
    }
    swap(mp[v1],mp[v2]);
    int prev=INT_MAX;
    int ans=0;
    for(int i=1;i<=mp.size();i++){
        if(mp[i]<prev){
            ans++;
        }
        prev=mp[i];
    }
    return ans;
}
int32_t main() {
    mahak_codes
    int n,m;
    cin>>n>>m;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]=i;
    }
    while(m--){
        int a,b;
        cin>>a>>b;
        int ans=solve(mp,a-1,b-1);
        cout<<ans<<endl;
    }
    
    return 0;
}