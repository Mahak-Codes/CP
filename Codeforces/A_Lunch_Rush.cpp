#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n,k;
    cin>>n>>k;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        int f,t;
        cin>>f>>t;
        if(t>k){
            f-=(t-k);
        }
        maxi=max(maxi,f);
    }
    cout<<maxi<<endl;
    return 0;
}