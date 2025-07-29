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
        map<int, int>mp;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        int ans = 0,sum = 0;
        for (auto x:mp)
        {
            int cnt = x.second;
            if (cnt >= 3){
                ans += cnt * (cnt - 1) * (cnt - 2) / 6;
            }
            if (cnt >= 2){
                ans += cnt * (cnt - 1) / 2 * sum;
            }
            sum += cnt;
        }

        cout << ans << endl;
    }
    return 0;
}