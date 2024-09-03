#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n,q;
    cin>>n>>q;
    vector<int>a(n+1);
    a[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        a[i]+=a[i-1];
    }
    while(q--){
        int a1,b;
        cin>>a1>>b;
        cout<<a[b]-a[a1-1]<<endl;
    }
    return 0;
}