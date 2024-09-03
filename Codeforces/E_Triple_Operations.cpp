#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
int power(int n)
{
    int cnt = 0;
    while (n)
    {
        n /= 3;
        cnt++;
    }
    return cnt;
}
int32_t main()
{
    mahak_codes 
    int t;
    cin >> t;
    vector<int> dp(200001, -1);
    for (int i = 0; i < 200001; i++)
    {
        dp[i] = dp[i - 1] + power(i);
    }
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        cout << dp[r] - dp[l - 1]+ power(l) << endl;
    }

    return 0;
}