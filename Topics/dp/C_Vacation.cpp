#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    vector<int>a(n),b(n),c(n);
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    vector<int>adp(n);
    vector<int>bdp(n);
    vector<int>cdp(n);
    adp[0]=a[0];
    bdp[0]=b[0];
    cdp[0]=c[0];
    for(int i=1;i<n;i++)
    {
        adp[i]=a[i]+max(cdp[i-1],bdp[i-1]);
        bdp[i]=b[i]+max(adp[i-1],cdp[i-1]);
        cdp[i]=c[i]+max(adp[i-1],bdp[i-1]);
    }
    int ans=max({adp[n-1],bdp[n-1],cdp[n-1]});
    cout<<ans<<endl;
    

    return 0;
}