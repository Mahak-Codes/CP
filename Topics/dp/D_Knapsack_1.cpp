#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
int knapsack(int c,vector<int>&w,vector<int>&v,int n,vector<vector<int>>&dp){
    if((n==0) ||(c==0)){
        return 0;
    }
    if(dp[n][c]!=-1){
        return dp[n][c];
    }
    if(w[n-1]<=c){
        dp[n][c]=max(knapsack(c,w,v,n-1,dp),knapsack(c-w[n-1],w,v,n-1,dp)+v[n-1]);
    }
    else{
        dp[n][c]=knapsack(c,w,v,n-1,dp);
    }
    return dp[n][c];

}
    
int32_t main() {
    mahak_codes
    int n,c;
    cin>>n>>c;
    vector<int>w(n),v(n);
    vector<vector<int>>dp(n+1,vector<int>(c+1,-1));
    for(int i=0;i<n;i++){
        cin>>w[i]>>v[i];
    }
    knapsack(c,w,v,n,dp);
    cout<<dp[n][c];
    return 0;
}