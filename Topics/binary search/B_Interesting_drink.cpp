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
    vector<int>pre(1e6+1,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        pre[a[i]]++;
    }
    for(int i=1;i<=1e6;i++){
        pre[i]+=pre[i-1];
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        int ans=pre[min(x,(int)1e6)];
        cout<<ans<<endl;
    }

    return 0;
}