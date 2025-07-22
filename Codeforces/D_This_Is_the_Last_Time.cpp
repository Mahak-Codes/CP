#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans=k;
        vector<pair<pair<int,int>,int>>v(n);
        for(int i=0;i<n;i++){
            int l,r,val;
            cin>>v[i].first.first;
            cin>>v[i].first.second;
            cin>>v[i].second;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            int l,r,val;
            l=v[i].first.first;
            r=v[i].first.second;
            val=v[i].second; 
            if(l<=ans && ans<=r){
                ans=max(ans,val);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}