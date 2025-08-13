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
    vector<int>diff(n+1,0);
    while(q--){
        int l,r,val,d;
        cin>>l>>r>>val>>d;
        if(val==0){
            ans[l]+=val;
            ans[r+1]-=val;
        }
        else{
            ans[l]+=(val-l*d);
            ans[r+1]-=(val-l*d);
        }
        diff[l]+=d;
        diff[r+1]-=d;
    }
    for(int i=0;i<n;i++){
        ans[i+1]+=ans[i];
        diff[i+1]+=diff[i];
    }
    for(int i=0;i<n;i++){
        ans[i]+=a[i];
        diff[i]=diff[i]*i;
        cout<<ans[i]+diff[i]<<" ";
    }
    return 0;
}