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
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>a(n);
        for(int i=n;i>m;i--){
            cout<<i<<" ";
        }
        for(int i=1;i<=m;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}