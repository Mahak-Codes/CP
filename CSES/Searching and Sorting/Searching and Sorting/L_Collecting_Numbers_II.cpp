#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

int32_t main()
{
    mahak_codes 
    int n,m;
    cin >> n>>m;
    vector<int> a(n);
    int ans = 1;
    vector<int>mp(n+1,0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]=i+1;
    }
    for(int i=1;i<=n;i++){
        if(mp[i-1]>mp[i]){
            ans++;
        }
    }
    while(m--){
        int x,y;
        cin>>x>>y;
        x--;y--;
        int v1=a[x],v2=a[y];
        
        set<pair<int,int>>s;
        if(v1>1){
            s.insert({v1-1,v1});
        }
        if(v2>1){
            s.insert({v2-1,v2});
        }
        if(v1<n){
            s.insert({v1,v1+1});
        }
        if(v2<n){
            s.insert({v2,v2+1});
        }
        for(auto x:s){
            if(mp[x.first]>mp[x.second]){
                ans--;
            }
        }  
        swap(a[x],a[y]);
        swap(mp[v1],mp[v2]);
        for(auto x:s){
            if(mp[x.first]>mp[x.second]){
                ans++;
            }
        } 
        cout<<ans<<endl;
    }

    return 0;
}