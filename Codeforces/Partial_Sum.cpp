#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int q;
    cin>>q;
    vector<int>ans(n+1,0);
    while(q--){
        int l,r,val;
        cin>>l>>r>>val;
        ans[l]+=val;
        ans[r+1]-=val;
    }
    for(int i=0;i<n;i++){
        ans[i+1]+=ans[i];
    }
    for(int i=0;i<n;i++){
        ans[i]+=a[i];
        cout<<ans[i]<<" ";
    }
    return 0;
}