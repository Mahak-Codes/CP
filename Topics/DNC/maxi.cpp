#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
int f(int l,int r,vector<int>a){
    if(l==r){
        return a[l];
    }
    int mid=l+(r-l)/2;
    int x=f(l,mid,a);
    int y=f(mid+1,r,a);
    return  max(x,y);
  
}
int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxi=f(0,n-1,a);
    cout<<maxi<<endl;
    return 0;
}