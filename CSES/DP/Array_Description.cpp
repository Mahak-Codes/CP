#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n,m;
    cin>>n>>m;
    int mod=1e9+7;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    if(a[0]==0){
        for(int i=1;i<=m;i++){
            dp[1][i]=1;
        }
    }
    else{
        dp[1][a[0]] = 1;
    }
    for(int i=2;i<=n;i++){
        for(int k=1;k<=m;k++){
            if(a[i-1]!=k && a[i-1]!=0){ 
                dp[i][k]=0;
                continue;
            }
            for(int j=k-1;j<=k+1;j++){
                if(j>0 && j<=m){
                    dp[i][k]=(dp[i][k]+dp[i-1][j])%mod;
                }  
            }
        }
    }
    int ans=0;
    for(int i=1;i<=m;i++){
        ans = (ans + dp[n][i]) % mod;
        
    }
    cout<<ans<<endl;
    return 0;
}