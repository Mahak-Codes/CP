#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n,k;
    cin>>n>>k;
    vector<int>h(n);
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    vector<int>dp(n+1,INT_MAX);
    dp[0]=0;
    for(int i=1;i<n;i++){
        for(int j=1;j<=k;j++){
            if(i-j>=0){
                dp[i]=min(dp[i],dp[i-j]+abs(h[i-j]-h[i]));
            }
        }
    }
    cout<<dp[n-1]<<endl;
    return 0;
}