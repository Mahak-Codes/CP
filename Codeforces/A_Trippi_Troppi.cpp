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
       
        string ans;
        for(int i=0;i<3;i++){
            string s;
            cin>>s;
            ans+=s[0];
        }
        cout<<ans<<endl;
    }

    

    return 0;
}