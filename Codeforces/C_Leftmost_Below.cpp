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
        string ans="YES";
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(2*mini<=x){
                ans="NO";
            }
            mini=min(mini,x);
        }
        cout<<ans<<endl;
    }
    return 0;
}