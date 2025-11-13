#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int mid=a[n/2];
    if(!(n&1)){
        mid+=a[n/2-1];
        mid/=2;
    }
    int ans=0;
    for(auto x:a){
        ans+=abs(mid-x);
    }
    cout<<ans<<endl;
    return 0;
}