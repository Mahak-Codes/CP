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
            cout<<0<<endl;
        }
        else{
            for(int i=0;i<n-1;i++){
                cout<<0;
            }
            cout<<1;
            cout<<endl;
        }
    }

    

    return 0;
}