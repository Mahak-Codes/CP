#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
int pw(int x){
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;
    int eq= x ^ (x >> 1);
    return eq;
}
int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    while(t--){
        int x;
        cin>>x;
        int eq=pw(x);
        int diff=(x-eq)/2;
        int ans=diff*4;
        cout<<ans<<endl;
    }
    return 0;
}