#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
int m=1e9+7;
int32_t main(){
    int n;
    cin>>n;
    int ans=1;
    for(int i=1;i<=n;i++){
        ans*=2;
        ans%=m;
    }
    cout<<ans<<endl;

    return 0 ;
}