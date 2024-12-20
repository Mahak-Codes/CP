#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
int f(int n,vector<int>&dp){
    if(n==0 || n==1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n]=f(n-1,dp)+f(n-2,dp);
}
int32_t main() {
    int n=5;
    vector<int>dp(n+1,-1);
    dp[0]=0,dp[1]=1;
    for(int i=2;i<=n;i++ ){
        dp[i]=dp[i-1]+dp[i-2];
    }
    // int ans=f(n,dp);
    // cout<<ans<<endl;
    cout<<dp[n]<<endl;
    

    

    return 0;
}