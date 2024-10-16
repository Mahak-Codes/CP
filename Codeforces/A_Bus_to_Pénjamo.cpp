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
        int n, r, rem = 0, ans = 0;
        cin >> n >> r;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            r -= x / 2;
            ans += (x / 2) * 2;
            rem += (x % 2);
        }
        cout << ans + min(rem, 2 * r - rem) << endl;
    }

    return 0;
}