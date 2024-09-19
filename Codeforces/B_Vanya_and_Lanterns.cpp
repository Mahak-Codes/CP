#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n,l;
    double ans;
    cin>>n>>l;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int maxi=0;
    for(int i=1;i<n;i++){
        int d=a[i]-a[i-1];
        maxi=max(d,maxi);
    }
    int lf=a[0]-0;
    int rd=l-a[n-1];
    double mx=max({lf,rd});
    double mx2=(double)maxi/2;
    if(mx>mx2){
        ans=mx;
    }
    else{
        ans=mx2;
    }
    cout << fixed<<setprecision(10)<<ans<<endl;

    return 0;
}