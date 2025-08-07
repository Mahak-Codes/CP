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
        int n;
        cin>>n;
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i>0 && j>0){
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1])+i*j;
                }
               
            }
        }
        cout<<dp[n][n]<<endl;
    }

    

    return 0;
}