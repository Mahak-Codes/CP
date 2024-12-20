#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;
#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>pbds;

int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            v.push_back({a,b});
        }
        sort(v.begin(),v.end());
        pbds s;
        int ans=0;
        for(int i=0;i<n;i++){
            int cnt=s.order_of_key(v[i].second);
            ans+=s.size()-cnt;
            s.insert(v[i].second);
        }
        cout<<ans<<endl;
    }
    return 0;
}