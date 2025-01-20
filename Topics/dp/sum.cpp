#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    int sum,m;
    cin>>sum>>m;
    vector<int> c(m+1);
    c={2,3,5};
    vector<int>dp(sum+1,INT_MAX);
    dp[0]=0;
    for(int i=1;i<=sum;i++){
        for(int j=0;j<m;j++){
            if(i>=c[j]){
                dp[i]=min(dp[i],dp[i-c[j]]+1);
            }
        }
    }
    cout<<dp[sum]<<endl;
    return 0;
}
