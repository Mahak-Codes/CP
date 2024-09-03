#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int n;
    cin>>n;
    vector<int>h(n+1);
    vector<int>dp(n+1,INT_MAX);
    for(int i=1;i<=n;i++){
        cin>>h[i];
    }
    dp[0]=0;
    dp[1]=0;
    dp[2]=abs(h[1]-h[2]);
    for(int i=3;i<=n;i++){
        dp[i]=min(dp[i-1]+abs(h[i]-h[i-1]),dp[i-2]+abs(h[i]-h[i-2]));
    }
    cout<<dp[n]<<endl;



    

    return 0;
}