#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
void solve(vector<int>&a,int n,vector<int>&ans,int maxi,int i){
    if(i==n){
        return ;
    }
    maxi=max(a[i],maxi);
    ans[i]=maxi;
    solve(a,n,ans,maxi,i+1);

}
int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>ans(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxi=a[0];
    ans[0]=a[0];
    solve(a,n,ans,maxi,1);
     for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}