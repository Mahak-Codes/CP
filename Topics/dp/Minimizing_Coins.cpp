#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);


int32_t main() {
    mahak_codes
    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    vector<int> dp(x+1,INT_MAX);
    dp[0]=0;
    for (int sum = 0; sum <= x; sum++) {
        for(int j=0;j<n;j++){
            if(sum>=c[j]){
                dp[sum]=min(dp[sum],dp[sum-c[j]]+1);
            }
        }
    }
    int res=dp[x];
    if (res == INT_MAX) {
        cout << -1 << endl; 
    } else {
        cout << res << endl;
    }
    return 0;
}
