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
        int a,b;
        cin>>a>>b;
        if(a%b==0){
            cout<<0<<endl;
        }
        else{
            int ans=b-a%b;
            cout<<ans<<endl;
        } 
    }
    return 0;
}