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
        int n;
        cin>>n;
        int ans=n/4;
        if(n%4==2){
            ans++;
        }
        cout<<ans<<endl;
    }

    

    return 0;
}