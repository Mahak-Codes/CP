#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
void binary(int n,string &ans){
    if(n==0){
        return;
    }
    if(n%2==0){
        ans='0'+ans;
        binary(n/2,ans);
    }
    else{
        ans='1'+ans;
        binary(n/2,ans);
    }
}
int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        string ans="";
        binary(n,ans);
        cout<<ans<<endl;
    }

    

    return 0;
}