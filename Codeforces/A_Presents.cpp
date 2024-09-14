#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    vector<int>ans(n+1);
    ans[0]=0;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        ans[x]=i;
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}