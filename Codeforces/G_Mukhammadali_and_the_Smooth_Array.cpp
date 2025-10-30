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
        cin >> n;
        int sum=0,maxi=0;
        vector<int> a(n), c(n),dp(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            sum+=c[i];
        }
        for (int i = 0; i < n; i++)
        {
            dp[i] = c[i]; 
            for (int j = 0; j < i; j++)
            {
                if (a[i]>=a[j])
                {
                    dp[i] = max(dp[i], dp[j] + c[i]);
                }
            }
            maxi = max(maxi, dp[i]);
        }
        int ans=sum-maxi;
        cout << ans << endl;
    }
    return 0;
}