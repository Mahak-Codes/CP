#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n,l;
    cin >> n;
    int ans=0;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    if(n&1){
        l=a[n/2];
    }
    else{
        l=(a[n / 2] + a[(n - 2) / 2]) / 2; 
    }
    for(int i=0;i<n;i++){
        ans+=abs(a[i]-l);
    }
    cout<<ans<<endl;

    return 0;
}