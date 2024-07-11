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
        int n,k;
        cin>>k>>n;
        vector<int>a(n);
        int maxi=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>maxi){
                maxi=a[i];
            }
        }
        int ans=0,f=0;
        for(int i=0;i<n;i++){
            if(a[i]==maxi && f==0){
                f=1;
                continue;
            }
            else{
                ans= ans+(2*a[i])-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}