#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
int knapsack(int n,int w,int k,vector<int>&wt,vector<int>&v,vector<vector<vector<int>>>&dp){
    if((n==0)||(w==0)||(k==0)){
        return 0;
    }
    if(dp[n][w][k]!=-1){
        return dp[n][w][k];
    }
    if(wt[n]>w){
        dp[n][w][k]=knapsack(n-1,w,k,wt,v,dp);
    }
    else{
        dp[n][w][k]=max(knapsack(n-1,w,k,wt,v,dp),v[n]+knapsack(n-1,w-wt[n],k-1,wt,v,dp));      
    }
    return dp[n][w][k];
}
int32_t main() {
    mahak_codes
    int n,w,k;
    cin>>n>>w>>k;
    vector<int>wt(n);
    vector<int>v(n);
    vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(w+1,vector<int>(k+1,-1)));
    for(int i=0;i<n;i++){
        cin>>wt[i]>>v[i];
    }
    knapsack(n-1,w,k,wt,v,dp);
    cout<<dp[n-1][w][k];
    return 0;
}