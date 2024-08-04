#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
int m=1e9+7;
int solve(int n){
    vector<int>dp(n+1,0);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=6;j++){
            if(i-j>=0){
                dp[i]=(dp[i]+dp[i-j])%m;

            }
        }
    }
    return dp[n];
}
int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}