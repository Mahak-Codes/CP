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
        int n,m;
        cin>>n>>m;
        int ans=0;
        int l=max(0LL,n-m);
        int r=n+m;
        for(int i=31;i>=0;i--){
            if((l & (1LL<<i))||(r&(1LL<<i))||(l>>(i+1))!=(r>>(i+1))){
                ans|=(1LL<<i);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}