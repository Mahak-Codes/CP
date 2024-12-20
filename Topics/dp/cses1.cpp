#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
int mod=1e9+7;

int f(int n,int sum,vector<int>&c,vector<vector<int>>&dp){
    if(n==0){
        return dp[n][sum]=0;
    }
    if(sum==0){
        return dp[n][sum]=1;
    }
    
    if(dp[n][sum]!=-1){
      return dp[n][sum];
    }
    int not_pick=f(n-1,sum,c,dp);
    int pick = 0;
    if (sum >= c[n - 1]) {
        pick = f(n, sum - c[n - 1], c, dp);
    }
    dp[n][sum]=(pick+not_pick)%mod;
    return dp[n][sum];

}
int32_t main() {
    mahak_codes
    int n,x;
    cin>>n>>x;
    vector<int>c(n);
    vector<vector<int>>dp(n+1,vector<int>(x+1,-1));
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    f(n,x,c,dp);
    cout<<dp[n][x]<<endl;

    return 0;
}