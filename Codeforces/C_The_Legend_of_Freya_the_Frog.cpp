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
        double x,y,k;
        cin>>x>>y>>k;
        int ans=0,ans1=0,ans2=0,mini=INT_MAX;
        ans1=ceil(x/k);
        ans2=ceil(y/k);
        ans=(max(ans1*2-1,ans2*2)) ;
        cout<<ans<<endl;
    }
    return 0;
}