#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n,c;
    cin>>n>>c;
    vector<int>a(n);
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        int v=a[i]-(a[i+1]+c);
        maxi=max(maxi,v);
    }
    cout<<max(maxi,0LL)<<endl;
    return 0;
}