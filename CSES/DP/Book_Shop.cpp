#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

int32_t main()
{
    mahak_codes
    int n,w;
    cin >> n >> w;
    vector<int> c(n, 0), p(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    vector<int>dp(w+1,0);
    dp[0]=0;
    for(int j=0;j<n;j++){
        for(int i=w;i>=c[j];i--){
            dp[i]=max(dp[i],p[j]+dp[i-c[j]]);
        }
    }
    cout << dp[w]<<endl;

    return 0;
}