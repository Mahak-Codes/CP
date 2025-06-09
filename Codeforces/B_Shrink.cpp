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
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        cout<<1<<" ";
        for(int i=n;i>2;i--){
           cout<<i<<" ";
        }
        cout<<2<<endl;
    }

    return 0;
}