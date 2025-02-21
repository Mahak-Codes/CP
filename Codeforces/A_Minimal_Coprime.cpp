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
        int l,r;
        cin>>l>>r;
        if(l==1 && r==1){
            cout<<1<<endl;
        }
        else{
            cout<<r-l<<endl;
        }
    }

    

    return 0;
}