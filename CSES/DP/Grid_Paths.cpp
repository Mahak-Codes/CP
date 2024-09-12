#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
bool check(vector<vector<char>> &a, int i, int j, int n)
{
    if (i >= 0 && i < n && j >= 0 && j < n)
    {
        if (a[i][j] == '.')
        {
            return 1;
        }
    }
    return 0;
}
int mod = 1e9 + 7;
int32_t main()
{
    mahak_codes int n;
    cin >> n;
    vector<vector<char>> s(n, vector<char>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> s[i][j];
        }
    }
    if (s[0][0] == '*' || s[n - 1][n - 1] == '*')
    {
        cout << 0 << endl;
    }
    else
    {

        vector<vector<int>> dp(n, vector<int>(n, 0));
        dp[0][0] = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (check(s, i - 1, j, n))
                {
                    dp[i][j] = (dp[i][j] + dp[i - 1][j]) % mod;
                }
                if (check(s, i, j - 1, n))
                {
                    dp[i][j] = (dp[i][j] + dp[i][j - 1]) % mod;
                }
            }
        }
        cout << dp[n - 1][n - 1] << endl;
    }
    return 0;
}