#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> s(n + 1);
    for (int i = 0; i < n; i++)
    {
        s[i + 1] = s[i] + a[i];
    }

    int ans = 1LL * n * (n + 1) / 2;
    vector<int> dp(n + 1);
    dp[n] = 1;
    for (int i = n - 1, j = n + 1; i >= 0; i--)
    {
        while (s[j - 1] - s[i] > x)
        {
            j--;
        }
        dp[i] = 1 + (j <= n ? dp[j] : 0);
        ans -= dp[i] - 1;
    }
    cout << ans << endl;
}
int32_t main()
{
    mahak_codes 
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
