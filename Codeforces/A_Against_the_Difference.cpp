#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

int32_t main()
{
    mahak_codes int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i]--;
        }
        vector<vector<int>> v(n);
        vector<int> id(n);
        for (int i = 0; i < n; i++)
        {
            id[i] = v[a[i]].size();
            v[a[i]].push_back(i);
        }

        vector<int> dp(n + 1);
        for (int i = 0; i < n; i++)
        {
            dp[i + 1] = dp[i];
            if (id[i] >= a[i])
            {
                dp[i + 1] = max(dp[i + 1], a[i] + 1 + dp[v[a[i]][id[i] - a[i]]]);
            }
        }

        cout << dp[n] << endl;
    }

    return 0;
}