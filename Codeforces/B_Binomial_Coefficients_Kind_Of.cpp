#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
int mod=1e9+7;

int powm(int x,int n){
    x%=mod;
    if(n==0){
        return 1;
    }
    if(n==1){
        return x % mod;
    }
    int p=powm(x*x,n/2)%mod;
    if(n&1){
        p=p*x%mod;
    }
    return p%mod;
}
int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    int mod=1e9+7;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        int ans=powm(2,b[i]);
        cout<<ans<<endl;
    }
    return 0;
}