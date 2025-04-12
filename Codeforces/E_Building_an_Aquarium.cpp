#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
bool req(vector<int>&a,int h,int x){
      int cnt=0;
      for(int i=0;i<a.size();i++){
        if(a[i]<h){
           cnt+=(h-a[i]);
        }
      }
      return cnt<=x;
}
int32_t main() {
    mahak_codes
    int t;
    cin >> t;
    while(t--){
       int n,x;
       cin>>n>>x;
       vector<int>a(n);
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       int l=1,r=INT_MAX;
       int ans=1;
       while(l<=r){
        int mid=(r-l)/2+l;
        if(req(a,mid,x)){
           ans=mid;
           l=mid+1;
        }
        else{
            r=mid-1;
        }
       }
       cout<<ans<<endl;
    }


    return 0;
}