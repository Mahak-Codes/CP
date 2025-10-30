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
        int h,d;
        cin>>h>>d;
        int l=d,r=2*d-1,ans=2*d;
        while (l<=r)
        {
           int mid=l+(r-l)/2;
           int x=mid-d+1;
           int s1=(d/x)*(d/x+1)/2;
           int s2=(d/x+1)*(d/x+2)/2;
           int s=(d%x)*s2+(x-d%x)*s1;
           if(s<h+mid-d){
            ans=mid;
            r=mid-1;
           }
           else{
            l=mid+1;
           }
        }
        cout<<ans<<endl;
    }
    return 0;
}