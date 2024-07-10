#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
int pw(int n){
    int eq=0;
    for(int i=n;i>0;i--){
        if(!(i&(i-1))){
            eq=i;
            break;
        }
    }
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